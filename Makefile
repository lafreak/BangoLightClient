all:
	g++ -w -fpermissive -pthread -std=c++11 -o bango BangoLightClient/Client.cpp BangoLightClient/KSocket.cpp

