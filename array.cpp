//array
#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;

int main()
{
	list<int> myList {6, 66, 1, 5, 7, 9};
	for(const auto &el : myList)
	{
		cout << el << endl;
	}
	/*
	int arr[] = {6, 66};
	//cout << arr [1] << endl;
	//range-based loop
	//this loop is an analog of 'foreach' from other programming languages
	for(auto el : arr) //&el - passing by reference 
	//(it is profitable to work on the link) speed!
	//for(const auto el : arr)
	{
		el = 1; //when '&el' is used, the values of all the array elements will be changed
		cout << el << endl;
	}
	/*
	//it is not recommended to use
	for each(int el : arr)
	{
		cout << el << endl;
	}
	*/
	
	return 0;
}
