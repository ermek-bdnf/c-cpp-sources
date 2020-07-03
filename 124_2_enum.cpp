//124.2. enum
#include<iostream>
#include<algorithm>
#include<string>
#include<fstream>
using namespace std;

bool play = true; //global variable for exiting the program
class PC
{
public:
	enum PCState
	{
		OFF,
		ON,
		SLEEP,
	};
	PCState GetState()
	{
		return this->State;
	}
	void SetState(PCState State)
	{
		this->State = State;
	}
private:
	PCState State; //turn on, turn off (PC)
};
//----------------------- overloading >> operator for enum type----
istream& operator>>(istream& is, PC::PCState& obj)
{
	string tmp;
	if (is >> tmp)
		//for (int x = 0; x < size(tmp); x++)
		//	tmp[x]=toupper(tmp[x]);
		for_each(tmp.begin(), tmp.end(), [](char& c){ 
			c = ::toupper(c);
		}); //#include<algorithm>
		if (tmp == "ON")
			obj = PC::PCState::ON;
		else if (tmp == "OFF")
			obj = PC::PCState::OFF;
		else if (tmp == "SLEEP")
			obj = PC::PCState::SLEEP;
		else if (tmp == "Q")
			play= false;
		else
			cout << "Enter correct State" << endl;
	return is;
}
//-------------------------------------------------------------------
int main()
{
	PC pc;
	PC::PCState pc_state;
	while (play)
	{
		cout << "To change PC states type 'off', 'on', 'sleep' or 'q' for quit program: ";
		cin >> pc_state;
		pc.SetState(pc_state);
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
	}
	
	return 0;
}
