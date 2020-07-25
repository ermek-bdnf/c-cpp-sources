//9. set
#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
	set<int> mySet = {6, 12, -6, 0};
	auto it = mySet.find(10);
	
	mySet.end();
	/*
	for (int i=0; i<20; i++)
	{
		mySet.insert(rand() % 10);
	}
	/*
	set<int> mySet = {6, 12, -6, 0};
	mySet.insert(12);
	mySet.insert(12);
	mySet.insert(12);
	//set<int> mySet;
	/*
	mySet.insert(5);
	mySet.insert(1);
	mySet.insert(12);
	mySet.insert(4);
	mySet.insert(-1);
	mySet.insert(18);
	
	for(auto &el : mySet)
	{
		cout << el <<endl;
	}
	*/ 
	return 0;
}
