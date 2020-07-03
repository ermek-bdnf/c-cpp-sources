#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	const int ROW = 3;
	const int COL = 4;
	//int arr[ROW][COL]; //array with garbage
	//int arr[ROW][COL]{}; //array with zeros
	int arr[ROW][COL]{{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	//int arr[ROW][COL] = {{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	for(int i=0;i<ROW;i++)
	{
		for(int j=0;j<COL;j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	
	for(int i=0;i<ROW;i++)
	{
		for(int j=0;j<COL;j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	
	//cout << sizeof(arr)/sizeof(arr[0][0]) << endl;
	return 0;
}
