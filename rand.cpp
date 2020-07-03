#include<iostream>
#include<cstdlib> //rand(), srand()
#include<ctime> //time()
using namespace std;

int main()
{
	srand(time(NULL));
	int const SIZE = 10;
	int arr[SIZE];
	for (int i=0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
	}
	for (int i=0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
