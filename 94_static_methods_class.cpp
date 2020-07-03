//94. static methods of class
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
		Toy(int weight, string color)
		{
			this->weight = weight;
			this->color = color;
			Count ++;
			id = Count;
		}
		
		int GetId()
		{
			//this->weight = 666;
			return id;
		}
		
		static int GetCount()
		{
			return Count;
		}
		
		static void ChangeColor(Toy &toy, string color)
		{
			toy.color = color;
		}
		
		void ChangeColorNoStatic(string color)
		{
			this->color = color;
		}
		
		static void ChangeWeight(Toy &toy, int weight)
		{
			toy.weight = weight;
		}
		
		void ChangeWeightNoStatic(int weight)
		{
			this->weight = weight;
		}
		
		void Print()
		{
			cout << "\tweight: " << weight << "\tcolor: " << color << endl;
		}
			
	private:
		static int Count;
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
	Toy toy(200, "dark-velvet");
	
	toy.ChangeColorNoStatic("red");
	toy.ChangeWeightNoStatic(666666);
	//toy.ChangeColor(toy, "dark-red");
	//Toy::ChangeColor(toy, "dark-red");
	//toy.ChangeWeight(toy, 666);
	//Toy::ChangeWeight(toy, 666);
	cout << "ID: " << toy.GetId(); cout << " "; toy.Print(); cout << endl;
	
	//Toy toy2(200, "dark-brown");
	//Toy toy3(200, "dark-velvet");
	
	
	
	/*
	cout << toy.GetId() << endl; //1
	cout << Toy::GetCount() << endl;
	cout << toy.GetCount() << endl;
	*/
	
	/*
	cout << "ID: " << toy.GetId(); cout << " "; toy.Print(); cout << endl;
	cout << "ID: " << toy2.GetId(); cout << " "; toy2.Print(); cout << endl;
	cout << "ID: " << toy3.GetId(); cout << " "; toy3.Print(); cout << endl;
	*/
	
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
