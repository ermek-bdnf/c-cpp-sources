//102. calling the base class constructor from the successor constructor
#include<iostream>
#include<string>
using namespace std;

class A
{
	public:
		A()
		{
			msg = "empty message";
		}
		
		A(string msg)//New World Order
		{
			this->msg = msg;
		}
		
		void PrintMsg()
		{
			cout << msg << endl;
		}
	
	private:
		string msg;	
};

class B : public A
{
	public:
		B():A("N e w  W o r l d  O r d e r") //PrintMsg() -> A(string msg)
		{
			
		}
};

int main()
{
	//A a("New World Order");
	//a.PrintMsg();
	B b;
	b.PrintMsg();
	return 0;
}
