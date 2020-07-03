//109. multiple Inheritance
#include<iostream>
#include<string>
using namespace std;

//both class methods and class attributes can be inherited.

class Runner
{
	public:
		string str = "Attribute of Runner";
		void Run()
		{
			cout << "Runner is running" << endl;
		}
};

class Swimmer
{
	public:
		string str2 = "Attribute of Swimmer";
		void Swim()
		{
			cout << "Swimmer is swimming" << endl;
		}
};

class Triathlete : public Runner, public Swimmer //multiple inheritance
{
		
};

int main()
{
	Triathlete tr;
	/*
	cout << tr.str << endl;
	tr.Run();
	cout << tr.str2 << endl;
	tr.Swim();	
	*/
	Runner *ptr_r = &tr;
	Swimmer *ptr_s = &tr;
	/*
	Runner r;
	r.Run();
	
	Swimmer s;
	s.Swim();
	*/
	return 0;
}
