//14_3 find_if_not //search algorithm
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

//std::find_if_not //returns true if the predicate returns false
//inverted response - negative response instead of positive

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
	vector<Person> people
	{
	Person("Maryah", 200),
	Person("John", 300),
	Person("Andrew", 130),
	Person("Katty", 160),
	Person("Izabella", 220),
	Person("Sussane", 240)
	};
	
	if(result == v.end())
	{
		cout << "-" << endl;
	}
	else
	{
		cout << "+" << endl;
	}
	/*
	vector<int> v = { 6,4,4,12,1,2,7 }; 
	auto result = find_if_not(v.begin(),v.end(),[](int a)
	{
		//return a%2 == 0;
		return a > 0;
		//return a == 12;
	});
	//returns true if the predicate returns false
	if(result == v.end())
	{
		cout << "-" << endl;
	}
	else
	{
		cout << "+" << endl;
	}
	*/
	return 0;
}
