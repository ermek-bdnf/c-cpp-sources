//89. remove a method implementation from a class
#include<iostream>
#include<string>
using namespace std;

class MyClass
{
	public:
		
		MyClass();
		~MyClass();
		
		void printMessage();
		/*
		void printMessage()
		{
			cout << "New World Order!" << endl;
		}
		*/
	private:
		
};

MyClass::MyClass()
{
	
}

MyClass::~MyClass()
{
	
}

void MyClass::printMessage()
	{
		cout << "New World Order!" << endl;
	}

int main()
{
	MyClass a;
	a.printMessage();
	return 0;
}
