//106. pure virtual destructor

#include<iostream>
#include<string>

using namespace std;

class A
{
	public:
		A()
		{
			
		}
		virtual ~A() = 0; //pure virtual destructor
		
};

A::~A(){};

class B : public A
{
	public:
		B()
		{
			
		}
		~B() override //override destructor ~A()
		{
			
		}		
};

int main()
{
	A *bptr = new B;
	delete bptr;
	
	return 0;
}
