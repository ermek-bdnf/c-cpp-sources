//2. Factory Method
#include<iostream>
using namespace std;

class Progger
{
	public:
		virtual void show() = 0;
};

class CppProgger : public Progger
{
	public:
		void show()
		{
			cout << "C++ programmer wrote a new program" << endl;
		}
};

class GoProgger : public Progger
{
	public:
		void show()
		{
			cout << "Go programmer wrote a new program" << endl;
		}
};

class Creator
{
	public:
		virtual Progger* create() = 0;
};

class CppCreator : public Creator
{
	public:
		Progger* create()
		{
			return new CppProgger();
		}
};

class GoCreator : public Creator
{
	public:
		Progger* create()
		{
			return new GoProgger();
		}
};

int main()
{
	Creator *creator = new CppCreator();
	Progger* cProgger = creator->create();
	creator = new GoCreator();
	Progger* gProgger = creator->create();
	cProgger->show();
	gProgger->show();
	return 0;
}
