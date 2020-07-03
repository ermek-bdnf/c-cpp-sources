//92. static
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
		}
			
	private:
		int weight;
		string color;
		
		//friend void Gamer::TakeToy(Toy &toy);
};

int Toy::Count = 0;
/*
void Gamer::TakeToy(Toy &toy)
{
	toy.color = "";
	cout << "TakeGame " << "\tweight: " << toy.weight << 
	"\tcolor: " << toy.color << endl;
	cout << toy.weight << endl;
}
*/
int main()
{
	Toy toy(200, "dark-gray");
	Toy toy2(200, "dark-brown");
	Toy toy3(200, "dark-red");
	
	cout << Toy::Count << endl;
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
