#include <stdio.h>
#include <iostream>

#include "KSocket.h"


int main(int argc, char** argv)
{
	if (argc < 5)
	{
		printf("Not enough params.\nExample: ./BangoLightClient.exe <ip> <port> <login> <password>");
		return 1;
	}

	srand(time(0));

	if (!KSocket::Connect(argv[1], atoi(argv[2])))
	{
		printf("Cannot connect to %s(%s).\n", argv[1], argv[2]);
		return 1;
	}

	printf("Connected to server %s(%s).\n", argv[1], argv[2]);

	printf("Signing in user [%s]\n", argv[3]);

	KSocket::WritePacket(C2S_LOGIN, "sss", argv[3], argv[4], "undefined");

	getchar();
	getchar();

	KSocket::Disconnect();

	return 0;
}
