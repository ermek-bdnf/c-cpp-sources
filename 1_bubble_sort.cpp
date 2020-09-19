//1_bubble_sort.cpp
#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int N;
	cout << "elements: ";
	cin >> N;
	int arr[N];
	cout << "origin: \t";
	for(int i=0; i<N; ++i)
	{
		arr[i] = rand() % 30;
		cout << arr[i] << " ";
	}
	for(int i=N-1; i>=0; --i) //i=N-1 - last element.
	{
		for(int j=0; j<i; ++j)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	cout << "\n\nbubble sort: \t";
	for(int i=0; i<N; ++i)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
