//97. agregation
#include<iostream>
#include<string>
using namespace std;

class Cap
{
	public:
		string GetColor()
		{
			return color;
		}
	private:
		string color = "dark red";
};

class Model
{
	public:
		void InspectModel()
		{
			cout << "Cap is " << cap.GetColor() << endl;
		}
	private:
		Cap cap;
};

class Human
{
	public:
		void Think()
		{
						
			brain.Think();
			//Human; Think(); Brain brain; Think();
		}
		
		void InspectTheCap()
		{
			cout << "My cap is " << cap.GetColor() << endl;
		}
	
	private:
		class Brain
		{
			public:
				void Think()
				{
					cout << "I think" << endl;
				}
		};
		
		Brain brain;
		Cap cap;
};

int main()
{
	Human human;
	human.Think();
	human.InspectTheCap();
	Model model;
	model.InspectModel();
	
	return 0;
}
