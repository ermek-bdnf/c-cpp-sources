//triangle
#include<iostream>
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
			cout << smb;
		}
		cout << endl;
	}
	
	return 0;
}
