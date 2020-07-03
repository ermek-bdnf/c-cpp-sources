//142. std::function
#include<iostream>
#include<functional>
using namespace std;

void Funk()
{
	cout << "Funk() is called" << endl;
}

void Root()
{
	cout << "Root() is called" << endl;
}

int Sum(int x, int y)
{
	return x + y;
}

int main()
{
	function<int(int,int)> f;
	f = Sum;
	//f(6,16);
	cout << f(6,16) << endl; //int Sum(int x, int y){ return x + y; }
	/*
	//the creation of the object 'function'
	function<void()> f;
	//f = Funk;
	f = Root;
	f(); //calling the 'Funk()' function
	// () - operator to call a stored function.
	*/
	return 0;
}
