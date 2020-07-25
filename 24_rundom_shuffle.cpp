//24. random_shuffle
#include<iostream>
#include<vector> //dynamic array
//#include<list> //doubly linked list
#include<algorithm>
#include<ctime> //srand()
using namespace std;

//sorting the container in random order
//std::random_shuffle

class iAction
{
	public:
		//explicit iAction(){}
		virtual void Action() = 0;
		
};

class progAction : public iAction
{
	virtual void Action() override
	{
		cout << "I'm a programmer" << endl;
	}
};

class studyAction : public iAction
{
	virtual void Action() override
	{
		cout << "I teach libraries STL" << endl;
	}
};

class videoAction : public iAction
{
	virtual void Action() override
	{
		cout << "I watch videos on YouTube" << endl;
	}
};

int main()
{
	srand(time(NULL));
	
	iAction* arr[] = 
	{
		//&progAction(),
		//&studyAction(),
		//&videoAction()
		new progAction(),
		new studyAction(),
		new videoAction()
	};
	random_shuffle(begin(arr), end(arr));
	
	for(auto &el : arr)
	{
		el->Action();
	}
	cout << endl;
	/*
	int arr[] = { 1,2,3,4 };
	random_shuffle(begin(arr), end(arr));
	
	for(auto el : arr)
	{
		cout << el << ' ';
	}
	cout << endl;
	*/
	return 0;
}
