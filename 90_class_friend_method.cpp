//90. friendly methods of the class
#include<iostream>
#include<string>
using namespace std;

class MyClass
{
	public:
		
		MyClass();
		~MyClass();
		
		void printMessage();
		/*
		void printMessage()
		{
			cout << "New World Order!" << endl;
		}
		*/
	private:
		
};

MyClass::MyClass()
{
	
}

MyClass::~MyClass()
{
	
}

void MyClass::printMessage()
	{
		cout << "New World Order!" << endl;
	}

class Toy;
class Gamer
{
	public:
		void TakeToy(Toy &toy);
};

class Toy
{
	public:
		Toy(int weight, string color)
		{
			this->weight = weight;
			this->color = color;
		}
			
	private:
		int weight;
		string color;
		
		friend void Gamer::TakeToy(Toy &toy);
};


int main()
{
	Toy toy(200, "dark-gray");
	
	Gamer gamer;
	gamer.TakeToy(toy);
	
	return 0;
}

void Gamer::TakeToy(Toy &toy)
{
	cout << "TakeGame " << "\tweight: " << toy.weight << "\tcolor: " << toy.color << endl;
}
