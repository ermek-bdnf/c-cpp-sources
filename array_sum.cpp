#include<iostream>
#include<conio.h>
using namespace std;
const int Nmax = 100;

int main()
{
	double arr[Nmax];
	int n;
	double Sum;
	int i;
	
	cout << "Input size: ";
	cin >> n;
	cout << "Input elements: \n";
	for(i=0; i < n; i++)
	cin >> arr[i];
	
	Sum = 0;
	for(i=0; i<n; i++)
	Sum = Sum + arr[i];
	cout << "Sum = " << Sum << endl;
	//getch();
	
	return 0;
}
