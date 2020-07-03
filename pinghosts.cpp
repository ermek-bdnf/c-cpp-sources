#include<iostream>
#include<string>
#include<windows.h>
using namespace std;

static string host;
static string ping_again;

void ping_ag();

void ping_s()
{
	system("cls");
	cout << "Host: ";
	cin.ignore();
	getline(cin, host);
	system(("ping " + host).c_str());
	cout << endl;
	ping_ag();
}

void ping_ag()
{
	cout << "(Y)es or (N)o\n\n";
	cout << "Ping another host: ";
	cin >> ping_again;
	
	if(ping_again=="Y"||ping_again=="y")
	{
		//system("cls");
		ping_s();
	}
	else if(ping_again=="N"||ping_again=="n")
	{
		system("exit");
	}
	else
	{
		cout << "Invalid input";
		return ping_ag();
	}
}

int main()
{
	SetConsoleTitle("ping");
	ping_s();
	
	return 0;
}
