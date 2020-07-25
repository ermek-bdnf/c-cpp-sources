//13.0 vector2 //sorting algorithm
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

//bool operator ==(const Point & other)
//{
//	return this->x == other.x && this->y == other.y;
//}
//bool result = a==b overloading the equality operator

using namespace std;

bool GreaterThanZero(int a)
{
	return a > 0;
}

/*bool MyPred(int a, int b)
{
	return a > b; 
	//returns the result of comparing two incoming parameters
}*/
//instead of a separate function, we use lambda expressions

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
	Person("Maryah", 200),
	Person("John", 300),
	Person("Andrew", 130),
	Person("Katty", 160),
	Person("Izabella", 220),
	Person("Sussane", 240)
	};
	sort(people.begin(), people.end(), [](const Person &p1, const Person &p2)
	{
		return p1.Score > p2.Score;
		//return p1.Name < p2.Name;
		//bool result = p1.Name > p2.Name;
		//return result;
	});
	for(auto el : people)
	{
		cout << "Name: " << el.Name << "\t\tScore: " << el.Score << endl;
	}
	return 0;
}
