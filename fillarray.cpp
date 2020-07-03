//passing an array to a function
#include<iostream>
using namespace std;

//the function must always pass its size along with the array.
//for example, like this: (int arr[], const int size)

void FillArray(int arr[], const int size)
{
	cout << "size of arr: " << sizeof(arr) << endl;
	for(int i=0; i<size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void PrintArray(int arr[], const int size)
{
	for(int i=0; i<size; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	const int SIZE = 10;
	int array[SIZE]; //'array' and 'arr' - one and the same array
	//cout << "size of massiv: " << sizeof(massiv) << endl;
	FillArray(massiv, SIZE);
	PrintArray(massiv, SIZE);
	return 0;
}
