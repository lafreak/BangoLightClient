# Bango Light Client
Command line client for load/stress tests of [Bango Emulator](https://github.com/lafreak/Bango).  
Application logins to server and generates random movement.  
When somebody asks of party - it instantly accepts it.  
Can be extended to do more things.

### How to use
Compile using Visual Studio.  
Run ``BangoLightClient.exe <ip> <port> <login> <password>``

### Example
Simple batch script to run 90 clients in 1 seconds interval:
```
@echo off & setlocal EnableDelayedExpansion

for /l %%x in (10, 1, 11) do (
	start BangoLightClient.exe 192.168.189.129 3000 bot%%x passwd
	timeout 1
)
```

  
![img](https://image.prntscr.com/image/_ioO0jT-SHe8d3zJf0bjuQ.png)
