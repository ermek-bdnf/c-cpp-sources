//13.0 vector //sorting algorithm
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

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
	vector<int> v = {9, 4, 94, 6, 1, 3, 7};
	sort(v.begin(), v.end(), [](int a, int b){
		return a > b;
	});
	//the third parameter is a lambda expression
	//in this case it acts as an anonymous predicate
	
	//sort(v.begin(), v.end(), MyPred); //sort()
	//descending sort
	for(auto el : v)
	{
		cout << el << endl;
	}
	/*
	//sort(v.begin(),v.end());
	//ascending sort
	//sort() - sort function
	//in order to output in descending order, 
	//the third parameter must specify the predicate
	//you need to use a binary predicate
	for(auto el : v)
	{
		cout << el << endl;
	}
	/*
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
	*/
	//int result = count_if(people.begin(), people.end(), people.front());
	//front() is a vector method,
	//which allows you to get a reference to the first element of the vector.
	//cout << result << endl;
	return 0;
}
