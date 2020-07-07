//triangle
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int len;
	cout << "Length: ";
	cin >> len;
	char smb;
	cout << "Symbol: ";
	cin >> smb;
	for(int i=1; i<=len; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout << setw(2) << smb;
		}
		cout << endl;
	}
	
	cout << endl;
	
	for(int i=len; i>=1; i--)
	{
		for(int j=1; j<=i; j++)
		{
			cout << setw(2) << smb;
		}
		cout << endl;
	}
	
	return 0;
}
