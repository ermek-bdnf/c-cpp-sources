//142.2 std::function
#include<iostream>
#include<vector>
#include<functional>
using namespace std;

//class 'function' is a polymorphic wrapper for a function.

void Funk(int x)
{
	if(x > 10 && x < 40)
	{
		cout << "Funk " << x << endl;
	}
}

void Root(int x)
{
	if(x % 2 == 0)
	{
		cout << "Root " << x << endl;
	}
}

void Alien(int x)
{
	cout << "Alien" << endl;
}

void DoWork(vector<int> &vc, vector<function<void(int)>> funcVector) //to iterate through an array
{
	for(auto el : vc) //перебор числа
	{
		for(auto &fel : funcVector)
		{
			fel(el); //iterating over a vector with functions
		}
	}
	/*
	for(auto el : vc)
	{
		//f(el);
		//Root(el); //666, 22
		//Funk(el); //11, 22
	}
	*/
}

/*
void DoWork(vector<int> &vc, function<void(int)> f) //to iterate through an array
{
	for(auto el : vc)
	{
		f(el);
		//Root(el); //666, 22
		//Funk(el); //11, 22
	}
}
*/

/*
void DoWork(vector<int> &vc) //to iterate through an array
{
	for(auto el : vc)
	{
		Root(el); //666, 22
		//Funk(el); //11, 22
	}
}
*/

int main()
{
	vector<int> vc = {666,9,11,22};
	vector<function<void(int)>> fVector;
	
	DoWork(vc, fVector);
	fVector.emplace_back(Funk);
	fVector.emplace_back(Root);
	fVector.emplace_back(Alien);
	DoWork(vc, fVector);
	//DoWork(vc, Root); //Root()//666,22
	//DoWork(vc, Funk); //Funk()//11,22
	//DoWork(vc);
	
	return 0;
}
	/*
	function<int(int,int)> f;
	f = Sum;
	//f(6,16);
	cout << f(6,16) << endl; //int Sum(int x, int y){ return x + y; }
	*/
	/*
	//creating a 'function' object
	function<void()> f;
	//f = Funk;
	f = Root;
	f(); //calling the 'Funk()' function
	// () - operator to call a stored function.
	*/
	//return 0;
