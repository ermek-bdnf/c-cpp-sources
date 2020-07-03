//97. composition.
#include<iostream>
#include<string>
using namespace std;

class Human
{
	public:
		void Think()
		{
			//Example of delegation. (pattern)
			
			brain.Think();
			//Human; Think(); Brain brain; Think();
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
};

int main()
{
	Human human;
	human.Think();
	
	return 0;
}
