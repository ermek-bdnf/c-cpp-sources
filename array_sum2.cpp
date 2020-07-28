#include<iostream>
#include<conio.h>
#include<ctime>
using namespace std;
const int Nmax = 100;

void int_arr()
{
	srand(time(NULL));
	int arr[Nmax];
	int n;
	int Sum;
	int i;
	
	cout << "Input size(int array): ";
	cin >> n;
	for(i=0; i < n; i++)
	{
		arr[i] = 1 + rand() % 4;
		cout << arr[i] << endl;
	}
		
	Sum = 0;
	for(i=0; i<n; i++)
	
	Sum = Sum + arr[i];
	cout << "Sum = " << Sum << endl;	
}

void double_arr()
{
	srand(time(NULL));
	double arr[Nmax];
	int n;
	double Sum;
	int i;
	
	cout << "Input size(double array): ";
	cin >> n;
	for(i=0; i < n; i++)
	{
		arr[i] = 1.0 + 4.0 * rand() / (float)RAND_MAX;
		cout << arr[i] << endl;
	}
		
	Sum = 0;
	for(i=0; i<n; i++)
	
	Sum = Sum + arr[i];
	cout << "Sum = " << Sum << endl;
}

int main()
{
	int_arr();
	cout << "\n";
	double_arr();
	return 0;
}
