#include<iostream>
using namespace std;

/*
void Funk(int &a) // passing parameters by link
//void Funk(int a) // passing parameters by value
{
	a++;
	//++a;
}
*/
// these are different variables

int Funk(int a) // passing parameters by value
{
	//return a++; //3
	return ++a; //4
}

int main()
{
	int value = 3;
	Funk(value);
	value = Funk(value);
	//cout << value << endl; // 3 //postfix
	cout << value << endl; // 4 //prefix
	return 0;
}
