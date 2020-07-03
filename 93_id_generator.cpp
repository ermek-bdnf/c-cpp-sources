//93. static. id generator
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
			//toy.Toy(666,");
		}
};

class Toy
{
	public:
		static int Count;
		
		Toy(int weight, string color)
		{
			this->weight = weight;
			this->color = color;
			Count ++;
			id = Count;
		}
		
		int GetId()
		{
			return id;
		}
		
		void Print()
		{
			cout << "\tweight: " << weight << "\tcolor: " << color << endl;
		}
			
	private:
		int weight;
		string color;
		int id;
		friend void Gamer::TakeToy(Toy &toy);
};

int Toy::Count = 0;

void Gamer::TakeToy(Toy &toy)
{
	toy.color = "";
	cout << "TakeGame " << "\tweight: " << toy.weight << "\tcolor: " << toy.color << endl;
	cout << toy.weight << endl;
}

int main()
{
	Toy toy(200, "dark-gray");
	Toy toy2(200, "dark-brown");
	Toy toy3(200, "dark-red");
	
	cout << "ID: " << toy.GetId(); cout << " "; toy.Print(); cout << endl;
	cout << "ID: " << toy2.GetId(); cout << " "; toy2.Print(); cout << endl;
	cout << "ID: " << toy3.GetId(); cout << " "; toy3.Print(); cout << endl;
	
	//cout << Toy::Count << endl;
	/*
	cout << toy.Count << endl;
	cout << toy2.Count << endl;
	cout << toy3.Count << endl;
	*/
	//Toy.count
	//Gamer gamer;
	//gamer.TakeToy(toy);
	
	MyClass z;
	z.printMessage();
	
	return 0;
}
