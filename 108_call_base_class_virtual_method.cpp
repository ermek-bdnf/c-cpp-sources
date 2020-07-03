//108. calling a base class virtual method
#include<iostream>
#include<string>
using namespace std;

class Msg
{
	public:
		Msg(string msg)
		{
			this->msg = msg;
		}
		
		virtual string GetMsg()
		{
			return msg;
		}
		
	private:
		string msg;
};

class BraketsMsg : public Msg
{
	public:
		BraketsMsg(string msg):Msg(msg)
		{
			
		}
		string GetMsg() override
		{
			return "<" + ::Msg::GetMsg() + ">"; //::Msg::GetMsg() - calling a base class method
		}
};

class Printer
{
	public:
		void Print(Msg *msg)
		{
			cout << msg->GetMsg() << endl;
		}
};

int main()
{
	BraketsMsg brm("New World Order!");
	//Msg m("NWO!");
	Printer p;
	p.Print(&brm);
	return 0;
}
