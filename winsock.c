#include<stdio.h>
#include<stdlib.h>
//-lws2_32
//-std=c++11
#include<winsock2.h>
#pragma comment(lib, "Ws2_32.lib")
#pragma warning(disable : 4996)

int main()
{
	WSADATA ws;
	WSAStartup(MAKEWORD(2,2), &ws);
	
	SOCKET s;
	s = socket(AF_INET, SOCK_STREAM, 0);
	
	SOCKADDR_IN sa;
		memset(&sa, 0, sizeof(sa));
		sa.sin_family = AF_INET;
		sa.sin_port = htons(1234);
	
	char c;
	printf("s - server\nk - client\n");
	scanf("%c", &c);
	
	if(c=='k')
	{
		sa.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
		connect(s, (const struct sockaddr*)&sa, sizeof(sa)); //(const_sockaddr *)
		
		int arr[] = {666, 666, 666};
		send(s, (char*)arr, sizeof(arr), 0);
		
		char st[20];
		memset(st, 0, sizeof(st));
		recv(s, st, sizeof(st), 0);
		printf(st);
		Sleep(3000);
	}
	
	if(c=='s')
	{
		bind(s, (const struct sockaddr*)&sa, sizeof(sa));
		listen(s, 100);
		
		int buf[3];
		memset(buf, 0, sizeof(buf));
			SOCKET client_socket;
			SOCKADDR_IN client_addr;
			int client_addr_size = sizeof(client_addr);
		
		while(client_socket = accept(s, (const struct sockaddr *)&client_addr,
		&client_addr_size))
		{
			printf("connect OK\n");
			
			while(recv(client_socket, buf, sizeof(buf), 0) > 0)
			{
				for(int i=0; i<3; i++)
					printf("%d\n", buf[i]);
			
				char nm[20] = "New World Order\0";
					send(client_socket, nm, sizeof(nm), 0);
				
			}
		}
	}
	
	closesocket(s);
	
	return 0;
}
