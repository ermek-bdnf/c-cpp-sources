//10 multimap
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
	multimap<string, int> myMultimap;
	myMultimap.emplace("New-York", 76);
	myMultimap.emplace("New-York", 76);
	myMultimap.emplace("Yale", 74);
	myMultimap.emplace("Washington", 97);
	//myMultimap.at("Yale") = 47;//myMap["Yale"] = 40;
	//myMultimap.erase("Yale");
	for (auto el : myMultimap)
	{
		cout << el.first << " : " << el.second << endl;
	}
	
	return 0;
}
