#ifdef _MSC_VER // Windows
#include <windows.h>
#include <direct.h>
#include <process.h>
#else // Linux
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#endif /*_MSC_VER*/

#include <math.h>
#include <memory.h>
#include "KSocket.h"


SOCKET KSocket::g_pSocket = INVALID_SOCKET;

bool KSocket::Connect(std::string szHostname, WORD wPort)
{
	WSADATA wsaData;
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != NO_ERROR)
	{
		printf("Initialization error.\n");
		return false;
	}

	KSocket::g_pSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (KSocket::g_pSocket == INVALID_SOCKET)
	{
		printf("Error creating socket: %ld\n", WSAGetLastError());
		WSACleanup();
		return false;
	}

	sockaddr_in service;
	memset(&service, 0, sizeof(service));

	service.sin_family = AF_INET;
	service.sin_addr.s_addr = inet_addr(szHostname.c_str());
	service.sin_port = htons(wPort);

	if (connect(KSocket::g_pSocket, (SOCKADDR*)&service, sizeof(service)) == SOCKET_ERROR)
	{
		printf("Failed to connect.\n");
		WSACleanup();
		return false;
	}

	_beginthreadex(0, 0, &KSocket::AwaitPacket, 0, 0, 0);

	return true;
}

bool KSocket::Disconnect()
{
	if (KSocket::g_pSocket != INVALID_SOCKET)
		closesocket(KSocket::g_pSocket);
	
	WSACleanup();

	return true;
}

bool KSocket::WritePacket(BYTE byType, ...)
{
	if (KSocket::g_pSocket == INVALID_SOCKET)
		return false;

	KSocket::Packet packet;
	
	packet.byType = byType;

	va_list va;
	va_start(va, byType);

	char* end = WritePacketV(packet.data, va);

	va_end(va);

	packet.wSize = end - (char*)&packet;
	send(KSocket::g_pSocket, (char*)&packet, packet.wSize, 0);

	return true;
}

char* KSocket::WritePacketV(char* packet, va_list va)
{
	char* format = va_arg(va, char*);

	for ( ; ; ) {
		switch (*format++) {

		case 'b':
		case 'B':
			*packet++ = va_arg(va, int);
			break;
		case 'w':
		case 'W':
			*(WORD *)packet = va_arg(va, int);
			packet += sizeof(WORD);
			break;
		case 'd':
			*(DWORD *)packet = va_arg(va, DWORD);
			packet += sizeof(DWORD);
			break;
		case 'U':
			*(UINT *)packet = va_arg(va, UINT);
			packet += sizeof(UINT);
			break;
		case 'I':	//	__int64
			*(__int64 *)packet = va_arg(va, __int64);
			packet += sizeof(__int64);
			break;
		case 's':
		case 'S':
			{
				char *str = va_arg(va, char *);
				if (str == 0 || *str == 0) {
					*packet++ = 0;
					break;
				}
				for ( ; (*packet++ = *str++ ) != 0 ; )
					;
			}
			break;
		case 'm':
		case 'M':
			{
				char *ptr = va_arg(va, char *);
				int	size = va_arg(va, int);
				memcpy(packet, ptr, size);
				packet += size;
			}
			break;
		case 0:
		default:
			return packet;
		}
	}

	return packet;
}

char* KSocket::ReadPacket(char* packet, const char* format, ...)
{
	va_list va;
	va_start(va, format);

	char byArgNum = strlen(format);
	for (char i = 0; i < byArgNum; i++)
	{
		switch (format[i])
		{
		case 'b':
			*va_arg(va, char*) = *packet;
			packet++;
			break;
		case 'd':
			*va_arg(va, DWORD*) = *(DWORD*)packet;
			packet += sizeof(DWORD);
			break;
		case 'w':
			*va_arg(va, WORD*) = *(WORD*)packet;
			packet += sizeof(WORD);
			break;
		case 'U':
			*va_arg(va, UINT*) = *(UINT*)packet;
			packet += sizeof(UINT);
			break;
		case 'I':
			*va_arg(va, __int64*) = *(__int64*)packet;
			packet += sizeof(__int64);
			break;
		case 's':
			{
                // ������ �ּҸ� �����Ѵ�.
                char *text = *va_arg(va, char**) = packet;
                //packet += sizeof(char*);

                // ���ڴ� ����ش�.
                while (*packet++) {}
            }
            break;
		case 0:
		default:
			return packet;
		}
	}

	va_end(va);
	return packet;
}

unsigned KSocket::AwaitPacket(void* param)
{
	PACKETBUFFER buffer;
	memset(&buffer, 0, sizeof(PACKETBUFFER));

	WORD wOffset=0;

	while (true)
	{
		char* p= (char*)&buffer + wOffset;

		int nLen = recv(KSocket::g_pSocket, p, sizeof(PACKETBUFFER) - wOffset, 0);

		if (nLen <= 0)
		{
			printf("Server disconnected.\n");
			closesocket(KSocket::g_pSocket);
			break;
		}

		if (nLen >= sizeof(PACKETBUFFER) - wOffset) 
			continue;

		if (wOffset)
		{
			p = (char*)&buffer;
			nLen += wOffset;

			for (int i = 0; i < nLen; i++)
				printf("%d ", (BYTE)p[i]);
			printf("\n");
		}

		if (nLen > *(WORD*)p)
		{
			char* pCut = p;

			int i=0;
			while (nLen > 0 && nLen >= *(WORD*)pCut && *(WORD*)pCut > 0)
			{
				Packet packet;
				memset(&packet, 0, sizeof(Packet));	
				memcpy(&packet, (char*)pCut, *(WORD*)pCut); 
				Process(packet);

				nLen -= *(WORD*)pCut;
				pCut = ((char*)pCut) + *(WORD*)pCut;

				i++;
			}

			//printf("Packet cut into %d pieces.\n", i);

			if (nLen < 0) 
			{
				memset(&buffer, 0, sizeof(PACKETBUFFER));
				memcpy(&buffer, (char*)pCut, -nLen);
				wOffset = -nLen;

				for (int i = 0; i < wOffset; i++)
					printf("%d ", (BYTE)pCut[i]);
				printf("\n");

				printf("-- ^ %d -- data is added to next buffer v.\n", -nLen);

				continue;
			}
				
			// Cut
			// And maybe recv missing
		}

		else if (nLen < *(WORD*)p)
		{
			// Recv missing
		}

		else
		{
			Packet packet;
			memset(&packet, 0, sizeof(Packet));
			memcpy(&packet, p, *(WORD*)p);

			Process(packet);
			// Simple process
		}

		wOffset=0;
		memset(&buffer, 0, sizeof(PACKETBUFFER));
	}

	return 0;
}


void KSocket::Process(Packet& packet)
{
	switch (packet.byType)
	{
	case S2C_ANS_LOGIN:
		{
			printf("S2C_ANS_LOGIN.\n");
			BYTE byAnswer=0;
			ReadPacket(packet.data, "b", &byAnswer);
		
			if (byAnswer != LA_OK)
			{
				printf("Could not log-in. byAnswer: %d\n", byAnswer);
				exit(0);
				return;
			}

			WritePacket(C2S_SECOND_LOGIN, "bs", SL_LOGIN, "00000000");

			break;
		}

	case S2C_SECOND_LOGIN:
		printf("S2C_SECOND_LOGIN.\n");
		printf("Wrong secondary password.\n");
		exit(0);

		break;

	case S2C_PLAYERINFO:
		{
			printf("S2C_PLAYERINFO.\n");
			BYTE byAuth=0;
			int nExpTime=0;
			BYTE byUnknwon=0;
			BYTE byCount=0;

			char *p=ReadPacket(packet.data, "bbdb", &byAuth, &byUnknwon, &nExpTime,  &byCount);
			if (byCount <= 0)
			{
				printf("No player available to log in.\n");
				exit(0);
				return;
			}

			int nPID=0;
			ReadPacket(p, "d", &nPID);

			WritePacket(C2S_LOADPLAYER, "ddd", nPID, 0, 0);
			break;
		}
	
	case S2C_ANS_LOAD:
		{
			printf("S2C_ANS_LOAD.\n");
			WORD wTime=0;
			int nX=0;
			int nY=0;

			ReadPacket(packet.data, "wdd", &wTime, &nX, &nY);

			WritePacket(C2S_START, "bd", 0, 0);

			// Shortcut load
			WritePacket(C2S_SHORTCUT, "b", 0);

			_beginthreadex(0, 0, &KSocket::RunThread, 0, 0, 0);

			break;
		}

	case S2C_SHORTCUT:
		{
			printf("S2C_SHORTCUT received.\n");

			BYTE byDump=0;
			char *p = ReadPacket(packet.data, "b", &byDump);

			WORD wVals[20]={0,};
			for (int i = 0; i < 20; i++)
				p = ReadPacket(p, "w", &wVals[i]);

			/*
			WritePacket(C2S_SHORTCUT, "bwwwwwwwwwwwwwwwwwwww", 1,
				wVals[0]+2, wVals[1]+2, wVals[2]+2, wVals[3]+2, wVals[4]+2, wVals[5]+2,
				wVals[6]+2, wVals[7]+2, wVals[8]+2, wVals[9]+2, wVals[10]+2, wVals[11]+2,
				wVals[12]+2, wVals[13]+2, wVals[14]+2, wVals[15]+2, wVals[16]+2, wVals[17]+2,
				wVals[18]+2, wVals[19]+2);
				*/

			// Shortcut save (should be at the app close, but hey)
			//WritePacket(C2S_SHORTCUT, "bm", 0, p, packet.wSize - (p - (char*)&packet));
			WritePacket(C2S_SHORTCUT, "bm", 1, p, packet.wSize - (p - (char*)&packet));
			break;
		}

	case S2C_CLOSE:
		printf("S2C_CLOSE.\n");
		exit(0);
		break;

	case S2C_ASKPARTY:
		{
			int nID = 0;
			ReadPacket(packet.data, "d", &nID);
			WritePacket(C2S_ANS_ASKPARTY, "bd", 1, nID);
			break;
		}

	case S2C_CREATEPLAYER:
		{
			static int __i=0;
			__i++;
			//printf("Players around: [%d]\n", __i);
			break;
		}
	}

	//delete packet;

	//return 0;
}

unsigned KSocket::RunThread(void* param)
{
	Sleep(2000);
	printf("Running loop has been started.\n");

	while (true)
	{
		int nStepX = (rand() % 51) - 25;
		int nStepY = (rand() % 51) - 24;

		int nDist = sqrt(pow(nStepX, 2) + pow(nStepY, 2));

		Sleep(nDist * 18);
		char byX = nStepX;
		char byY = nStepY;
		WritePacket(C2S_MOVE_ON, "bbb", byX, byY, 0);
	}
	return 0;
}
