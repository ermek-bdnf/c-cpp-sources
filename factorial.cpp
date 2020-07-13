#include<iostream>
using namespace std;

int Fact(int N)
{
	if(N == 0)
		return 0;
	if(N == 1)
		return 1;
	
	return N * Fact(N - 1);
}

int main()
{
	cout << "Factorial of number" << endl;
	int N;
	cout << "Enter a number: ";
	cin >> N;
	cout << Fact(N) << endl;
	return 0;
}
