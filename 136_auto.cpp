//136. auto
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//std::vector<int> myVector = {666, 99, 666666};
	//std::vector<int>::iterator it = myVector.begin();
	
	vector<int> myVector = {666, 99, 666666};
	//vector<int>::iterator it = myVector.begin();
	//auto it = myVector.begin();
	//cout << *it << endl; // 666
	
	for(auto it = myVector.begin(); it != myVector.end(); it++)
	{
		cout << *it << endl;
	}
	/*
	for(vector<int>::iterator it = myVector.begin(); it !=myVector.end(); it++)
	{
		
	}
	*/
	
	//auto c = "string"; //constant array of characters
	return 0;
}
