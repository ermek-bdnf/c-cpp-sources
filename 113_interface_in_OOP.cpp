//113. interface
#include<iostream>
#include<string>
using namespace std;

class Ibicycle //interface
{
	public:
		void virtual TwistTheWheel() = 0;
		void virtual Ride() = 0;
};

//interface implementation
class SimpleBicycle : public Ibicycle
{
	public:
		void TwistTheWheel() override
		{
			cout << "method TwistTheWheel()	SimpleBicycle" << endl;
		}
		void Ride() override
		{
			cout << "method Ride()	SimpleBicycle" << endl;
		}
};

//interface implementation
class SportBicycle : public Ibicycle
{
	public:
		void TwistTheWheel() override
		{
			cout << "method TwistTheWheel()	SportBicycle" << endl;
		}
		void Ride() override
		{
			cout << "method Ride()	SportBicycle" << endl;
		}
};

class Human
{
	public:
		void RideOn(Ibicycle & bicycle)
		{
			cout << "Twist The Wheel" << endl;
			bicycle.TwistTheWheel();
			cout << "Ride" << endl;
			bicycle.Ride();
		}
};

int main()
{
	SimpleBicycle smb;
	SportBicycle ssb;
	
	Human human;
	human.RideOn(smb);
	cout << endl;
	human.RideOn(ssb);
	return 0;
}
