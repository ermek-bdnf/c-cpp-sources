//91. friendly classes
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
		void playToy(Toy &toy)
		{
			toy.Toy(666,"");
		}
};

class Toy
{
	friend Gamer;
	
	public:
		Toy(int weight, string color)
		{
			this->weight = weight;
			this->color = color;
		}
			
	private:
		int weight;
		string color;
		
		//friend void Gamer::TakeToy(Toy &toy);
};

void Gamer::TakeToy(Toy &toy)
{
	toy.color = "";
	cout << "TakeGame " << "\tweight: " << toy.weight << "\tcolor: " << toy.color << endl;
	cout << toy.weight << endl;
}

int main()
{
	Toy toy(200, "dark-gray");
		
	Gamer gamer;
	gamer.TakeToy(toy);
	
	return 0;
}
