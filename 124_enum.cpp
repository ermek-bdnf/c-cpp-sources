//124. enum
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

enum Speed
{
	MIN=600,
	RECOMEND=900,
	MAX=1200
};

int main()
{
	Speed sp = Speed::MAX;
	cout << sp << endl;
	/*
	PC pc;
	pc.SetState(PC::PCState::ON);
	
	switch(pc.GetState())
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
	*/
	/*
	if(pc.GetState() == PCState::ON)
	{
		cout << "PC is working";
	}
	*/
	return 0;
}
