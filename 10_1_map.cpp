//10. map
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
	map<string, int> myMap;
	myMap.emplace("Manchester City", 76);
	myMap.emplace("Arsenal", 74);
	myMap.emplace("Manchester United", 97);
	myMap.at("Arsenal") = 47;//myMap["Arsenal"] = 40;
	myMap.erase("Arsenal");
	for (auto el : myMap)
	{
		cout << el.first << " : " << el.second << endl;
	}
	/*
	try
	{
		//myMap.at("Liverpool") = 25;
		myMap.at("Liverpool") = 75;		
	}
	catch(const std::exception&ex)
	{
		cout << ex.what() << endl;
		cout << "the key is missing in the map container" << endl;
	}
	//cout << myMap["Arsenal"] << endl;
	/*for (auto el : myMap)
	{
		cout << el.first << " : " << el.second << endl;
	}
	return 0;
}
