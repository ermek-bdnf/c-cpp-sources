//105. virtual constructor

#include<iostream>
#include<string>

using namespace std;

class A
{
	public:
		A()
		{
			cout << "allocated dynamic memory, an object of class A" << endl;
		}
		virtual ~A()
		{
			cout << "dynamic memory is freed, an object of class A" << endl;
		}
		
};

class B : public A
{
	public:
		B()
		{
			cout << "allocated dynamic memory, an object of class B" << endl;
		}
		~B() override //override destructor ~A()
		{
			cout << "dynamic memory is freed, an object of class B" << endl;
		}
};

int main()
{
	//B b;
	//B *bptr = new B; //без virtual и override
	A *bptr = new B; //с virtual ~A() и ~B() override
	delete bptr;
	return 0;
}
