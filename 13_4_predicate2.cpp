//13.4 predicates 2
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool GreaterThanZero(int a)
{
	return a > 0;
}
bool LessThanZero(int a)
{
	return a < 0;
}

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
	//people not an object of the Person class 
	//people object of class vector
	{
	Person("Marya", 200),
	Person("John", 300),
	Person("Andrew", 130),
	Person("Katty", 160),
	Person("Izabella", 220),
	Person("Sussane", 240)
	};
	
	int result = count_if(people.begin(), people.end(), people.front());
	//front() is a vector method,
	//which allows you to get a reference to the first element of the vector.
	cout << result << endl;
	return 0;
}
