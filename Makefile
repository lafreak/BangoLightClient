all:
	g++ -w -fpermissive -pthread -std=c++11 BangoLightClient/Client.cpp BangoLightClient/KSocket.cpp
