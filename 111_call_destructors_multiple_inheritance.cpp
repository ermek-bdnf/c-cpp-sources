//111. the order in which destructors are called in multiple inheritance.
#include<iostream>
#include<string>
using namespace std;

class Runner
{
	public:
		
		Runner()
		{
			cout << "call is Runner constructor" << endl;
		}
		
		~Runner()
		{
			cout << "call is Runner destructor" << endl;
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
		~Swimmer()
		{
			cout << "call is Swimmer destructor" << endl;
		}
		
		string str2 = "Attribute of Swimmer";
		void Swim()
		{
			cout << "Swimmer is swimming" << endl;
		}
};

class Triathlete : public Runner, public Swimmer //multiple inheritance
{
	public:
		Triathlete()
		{
			cout << "call is Triathlete constructor" << endl;
		}
		
		~Triathlete()
		{
			cout << "call is Triathlete destructor" << endl;
		}
};

int main()
{
	Triathlete tr;
	cout << endl << endl;
	//tr.Swim();
	return 0;
}
