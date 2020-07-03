//100. the order in which constructors are called during inheritance
#include<iostream>
#include<string>

using namespace std;

class A
{
	public:
		A() //default constructor
		{
			cout << "class A constructor called" << endl;
		}
		
};

class B : public A
{
	public:
		B() //default constructor
		{
			cout << "class B constructor called" << endl;
		}
		
};

class C : public B
{
	public:
		C() //default constructor
		{
			cout << "class C constructor called" << endl;
		}
		
};

int main()
{
	C c;	
	
	return 0;
}
