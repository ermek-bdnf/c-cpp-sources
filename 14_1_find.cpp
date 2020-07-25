//14_1 find //search algorithm
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

//std::find

using namespace std;

class Person
{
	public:
		Person(string name, double score) //constructor
		{
			this->Name = name;
			this->Score = score;
		}
		bool operator()(const Person &p) //predicate
		//accepts a Person object (&p) as a parameter
		{
			return p.Score > 180;
			//we check whether the number of points is higher
			//this object (p), that is, the studentó.
			//if yes, it returns the boolean value 1 (true)
			//if not, then 0(false)
		}
		string Name;
		double Score;
};

int main()
{
	/*
	vector<Person> people
	{
	Person("Maryah", 200),
	Person("John", 300),
	Person("Andrew", 130),
	Person("Katty", 160),
	Person("Izabella", 220),
	Person("Sussane", 240)
	};
	*/
	vector<int> v = { 6,4,4,12,1,2,7 }; 
	auto result = find(v.begin(),v.end(),12);
	if(result == v.end())
	{
		cout << "-" << endl;
	}
	else
	{
		cout << "+" << endl;
	}
	return 0;
}
