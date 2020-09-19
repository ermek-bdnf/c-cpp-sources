//3_selection_sort
#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	srand(time(NULL));
	int SIZE;
	cout << "elements: ";
	cin >> SIZE;
	int a[SIZE];
	cout << "origin: \t";
	for(int i=0; i<SIZE; ++i)
	{
		a[i] = rand() % 100;
		cout << " " << a[i];
	}
	
	for(int i=0; i<SIZE-1; ++i)
	{
		int tmp = i;
		for(int j=i+1; j<SIZE; ++j)
		{
			if(a[j] < a[tmp])
			{
				tmp = j;
			}
		}
		swap(a[i], a[tmp]);
	}
	
	cout << "\nselection sort: ";
	for(int i=0; i<SIZE; ++i)
	{
		cout << " " << a[i];
	}
	
	return 0;
}
