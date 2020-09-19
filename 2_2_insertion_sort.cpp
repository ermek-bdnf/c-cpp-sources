//2_2_insertion_sort.cpp
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
	cout << "\norigin: \t";
	for(int i=0; i<N; ++i)
	{
		arr[i] = rand() % 30;
		cout << arr[i] << " ";
	}
	for(int i=1,j,t; i<N; ++i)
	{	
		t=arr[i]; 
		for(j=i-1; j>=0 && arr[j]>t; --j)
			arr[j+1]=arr[j];
			arr[j+1]=t;
	}
	cout << "\n\ninsertion sort: ";
	for(int i=0; i<N; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
