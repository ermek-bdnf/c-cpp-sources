//98. class inheritance
#include<iostream>
#include<string>
using namespace std;

class Human
{
	//public:
	//	string name;
	private:
		string name;
		
	public:
		string GetName()
		{
			return name;
		}
		
		void SetName(string name)
		{
			this->name = name;
		}
};

class Student : public Human
{
	public:
		string group;
		
		void Learn()
		{
			cout << "Learn" << endl;
		}
};

class DistStudent : public Student
{
	public:
		void Learn()
		{
			cout << "Learn distantly" << endl;
		}
};

class Professor : public Human
{
	public:
		string subject;
};

int main()
{
	Student st;
	DistStudent dist;
	dist.SetName("Mark");
	cout << dist.GetName() << endl;
	dist.Learn();
	Professor pr;
	return 0;
}
