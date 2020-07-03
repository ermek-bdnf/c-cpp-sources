//124.1. enum
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

/*
enum PCState
{
	OFF,	//
	ON,		// по сути это набор констант.
	SLEEP	//
};
*/

class PC
{
public:
	enum PCState
	{
		OFF,
		ON,
		SLEEP
	};

	PCState GetState()
	{
		return State;
	}
	void SetState(PCState State)
	{
		this->State = State;
	}

private:
	PCState State; //turn on, turn off (PC)
};

int main()
{
	PC pc;
	int n;
	cout << "To change PC states enter any number from 0 to 2 (0=OFF, 1=ON, 2=SLEEP): ";
	cin >> n;
	pc.SetState(static_cast<PC::PCState>(n));
	
	switch (pc.GetState())
	{
	case PC::PCState::OFF:
		cout << "PC is turned off" << endl;
		break;
	case PC::PCState::ON:
		cout << "PC is working" << endl;
		break;
	case PC::PCState::SLEEP:
		cout << "PC is in sleep mode" << endl;
		break;
	}
	/*
	if(pc.GetState() == PCState::ON)
	{
		cout << "PC is working";
	}
	*/
	return 0;
}
