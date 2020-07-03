#include<iostream>
#include<vector>
#include<list>
using namespace std;

template <typename T>
void PrintList(const list <T> &lst)
{
	
	for (const int element : lst)
	{
		cout << element << endl;
	}
	/*
	for(auto i = lst.cbegin(); i != lst.cend(); ++i)
	{
		cout << *i << endl;
	}
	*/
}
//for (list<T>:iterator i = lst.cbegin(); i != lst.cend(); ++i)

int main()
{
	list<int> myList = {4, 6, 19, 99};
	PrintList(myList);
	/*
	for (const int &element : myList)
	{
		cout << element << endl;
	}

	/*
	int arr[] = {66,66,66};
	//auto
	cout << "const int element : arr" << endl;
	for (const int element : arr)
	{
		cout << element << endl;
	}
	cout << "int element : arr" << endl;
	cout << "element = 666, don't replace arr" << endl;
	for (int element : arr)
	{
		element = 666;
		cout << element << endl;
	}
	cout << "element = 666, replace arr" << endl;
	for (int &element : arr)
	{
		cout << element << endl;
	}
	/*
	for (int element : arr)
	{
		cout << element << endl;
	}
	*/
	//for each (int var in arr);
	/*
	for each(int var in arr)
	{
		cout << var << endl;
	}
	*/
	return 0;
}