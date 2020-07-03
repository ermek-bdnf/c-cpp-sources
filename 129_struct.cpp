//129. struct
#include<iostream>
#include<string>
using namespace std;

class MyClass //by default fields and methods of the class are private
{
	int a = 11;
	void Print()
	{
		cout << a << endl;
	}
};

struct MyStruct //by default fields and methods of the class are public
{
	MyStruc()
	{
		//cout << "MyStruct constructor called" << endl;
	}
	MyStruct(int a)
	{
		this->a = a;
		cout << "MyStruct constructor called" << endl;
	}
	~MyStruct()
	{
		cout << "MyStruct destructor called" << endl;
	}
	int a = 22;
	void Print()
	{
		cout << a << endl;
	}
};

int main()
{
	MyClass m;
	MyStruct ms(666);
	ms.Print();
	//cout << ms.a << endl;
	return 0;
}
