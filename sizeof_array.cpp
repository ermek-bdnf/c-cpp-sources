#include<iostream>
using namespace std;

int main()
{
	//int arr[]{4, 6, 12, 18, 666, 666};
	//cout << sizeof(arr) << endl; //24byte
	
	int arr[]{4, 6, 12, 18};
	//cout << sizeof(arr)/sizeof(int) << endl; //4byte
	//cout << sizeof(arr) << endl; //16byte
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
	/*const int SIZE = 6;
	int arr[SIZE];
	
	
	for(int i=0; i<SIZE; i++)
	{
		arr[i] << i;
	//the fill cycle of the array
	}
	for(int i=0; i<SIZE; i++)
	{
		arr[i] << endl;
	//output loop for array elements
	}
	return 0;*/
	//cout << sizeof(a) << endl;
}
