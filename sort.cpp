#include<iostream>
#include<time.h>
#include<algorithm>
using namespace std;

int main()
{
	srand(time(NULL));
	int N;
	cout << "elements: ";
	cin >> N;
	int a[N];
	cout << "origin: \t\t";
	for(int i=0; i<N; ++i)
	{
		a[i] = rand() % 100;
		cout << a[i] << " ";
	}
	
	sort(a, a+N);
	
	cout << "\nsort: \t\t\t";
	for(int i=0; i<N; ++i)
	{
		cout << a[i] << " ";
	}
	
	cout << "\ndescending sort: \t";
	for(int i = N - 1; i >= 0; --i)
        cout << a[i] << " ";
	return 0;
}
