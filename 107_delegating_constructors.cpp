//107. delegating constructors.
#include<iostream>
#include<string>

using namespace std;

class Human
{
	public:
		Human(string Name)
		{
			this->Name = Name;
			this->Height = 0;
			this->Age = 0;
			this->Weight = 0;
		}
				
		//delegating
		Human(string Name, int Height) :Human(Name)
		{
			this->Height = Height;
		}
		
		//delegating
		Human(string Name, int Height, int Age) :Human(Name, Height)
		{
			this->Age = Age;
		}
		
		//delegating
		Human(string Name, int Height, int Age, int Weight) :Human(Name, Height, Age)
		{
			this->Weight = Weight;
		}
		
		/*
		Human(string Name, int Age) //without delegating
		{
			this->Name = Name;
			this->Age = Age;
		}
		
		Human(string Name, int Age, int Weight) //without delegating
		{
			this->Name = Name;
			this->Age = Age;
			this->Weight = Weight;
		}
		*/
		string Name;
		int Age;
		int Height;
		int Weight;
};

int main()
{
	Human human("Sussana", 189, 40, 120);
	return 0;
}
