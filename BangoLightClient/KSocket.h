#ifdef _MSC_VER // Windows
#include <windows.h>
#include <winsock.h>
#else // Linux
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#endif /*_MSC_VER*/

#include <string>
#include <time.h>

#include "MainProtocol.h"
#include "common.h"

#pragma comment (lib, "Ws2_32.lib")

#define MAX_PACKET_LENGTH	8000

#pragma pack (push, 1)


#ifndef WIN32
#define SOCKET void*
typedef unsigned char  BYTE;
typedef unsigned short  WORD;
typedef unsigned long  DWORD;
#define __stdcall
#endif

class KSocket
{
	static SOCKET g_pSocket;

	struct PACKETBUFFER
	{
		char data[MAX_PACKET_LENGTH];
	};

	struct Packet
	{
		WORD wSize;
		BYTE byType;
		char data[MAX_PACKET_LENGTH];
	};

public:
	static bool Connect(std::string szHostname, WORD wPort);
	static bool Disconnect();
	static bool WritePacket(BYTE byType, ...);
	static char* __stdcall WritePacketV(char *packet, va_list va);
	static char* ReadPacket(char* packet, const char* format, ...);

	static unsigned int __stdcall AwaitPacket_old(void* socket);
	static unsigned int __stdcall AwaitPacket(void* socket);
	//static unsigned int __stdcall Process(void* socket);
	static void Process(Packet& packet);
	static unsigned int __stdcall RunThread(void *param);
};

#pragma pack (pop)
