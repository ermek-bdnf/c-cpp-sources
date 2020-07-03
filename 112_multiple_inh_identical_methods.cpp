//112. multiple inheritance of identical methods
#include<iostream>
#include<string>

using namespace std;

class Runner
{
	public:
		void Use()
		{
			cout << "Runner is running" << endl;
		}
};

class Swimmer
{
	public:
		
		void Use()
		{
			cout << "Swimmer is swimming" << endl;
		}
};

class Triathlete : public Runner, public Swimmer //multiple inheritance
{
	public:
				
};

int main()
{
	Triathlete tr;
	/*���������� ������� tr � ���� Runner*/
	((Runner)tr).Use();
	/*���������� ������� tr � ���� Swimmer*/
	((Swimmer)tr).Use();
	return 0;
}
