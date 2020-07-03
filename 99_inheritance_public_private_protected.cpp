//99 inheritance //public private protected
#include<iostream>
#include<string>
using namespace std;

class A
{
	public:
		string msgOne = "Message One";
	private:
		string msgTwo = "Message Two";
	protected:
		string msgThree = "Message Three";
};

class B : public A
{
	public:
		void PrintMsg()
		{
			cout << msgThree << endl;
		}
};

int main()
{
	A a;
	cout << "a: " << a.msgOne << endl;
	B b; cout << "b: ";
	b.PrintMsg();
	
	return 0;
}
