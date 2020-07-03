//110. the order in which constructors are called in multiple inheritance
#include<iostream>
#include<string>
using namespace std;

//both class methods and class attributes can be inherited.

class Runner
{
	public:
		Runner()
		{
			cout << "call is Runner constructor" << endl;
		}
		
		string str = "Attribute of Runner";
		void Run()
		{
			cout << "Runner is running" << endl;
		}
};

class Swimmer
{
	public:
		Swimmer()
		{
			cout << "call is Swimmer constructor" << endl;
		}
		
		string str2 = "Attribute of Swimmer";
		void Swim()
		{
			cout << "Swimmer is swimming" << endl;
		}
};

class Triathlete : public Runner, public Swimmer //multiple inheritance
{					
		Triathlete()
		{
			cout << "call is Triathlete constructor" << endl;
		}
};

int main()
{
	Triathlete tr;
	tr.Swim();
	return 0;
}
