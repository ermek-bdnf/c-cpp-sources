//101. the order of invocation of destructors in inheritance
#include<iostream>
#include<string>
using namespace std;

class A
{
	public:
		A()
		{
			cout << "class A constructor called" << endl;
		}
		
		~A()
		{
			cout << "class A destructor called" << endl;
		}
		
};

class B : public A
{
	public:
		B()
		{
			cout << "class B constructor called" << endl;
		}
		
		~B()
		{
			cout << "class B destructor called" << endl;
		}
		
};

class C : public B
{
	public:
		C()
		{
			cout << "class C constructor called" << endl;
		}
		
		~C()
		{
			cout << "class C destructor called" << endl;
		}

};

int main()
{
	C c;
	/*
	cout << "class A constructor called" << endl;
	cout << "class B constructor called" << endl;
	cout << "class C constructor called" << endl;
	cout << "class C destructor called" << endl;
	cout << "class B destructor called" << endl;
	cout << "class A destructor called" << endl;
	*/
	return 0;
}
