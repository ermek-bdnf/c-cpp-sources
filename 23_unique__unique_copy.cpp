//23. unique & unique_copy
#include<iostream>
#include<vector> //dynamic array
#include<list> //doubly linked list
#include<algorithm>
using namespace std;

//deletes duplicate elements
//std::unique	std::unique_copy
//unique - does not delete duplicate elements,
//sets the border between necessary and unnecessary elements.
//deleting elements is only used for containers
//unique_copy - similar to unique, but different from unique
//allows you to copy unique elements to a new container.

int main()
{
	//int arr[] = { 1,2,2,2,5,4,4 };
	vector<int> v = { 1,2,2,2,5,4,4 };
	//vector<int> v2;
	list<int> lst;
	unique_copy(begin(v), end(v), back_inserter(lst));
	for(auto el : lst)
	{
		cout << el << endl;
	}
	/*
	auto result = unique(begin(v), end(v));
	
	v.erase(result, end(v));
	for(auto el : v)
	{
		cout << el << endl;
		//output of elements up to the result border
	}
	*/
	/*
	for_each(begin(v), result, [](int a)
	{
		cout << a << endl;
	});
	//result indicates where the desired elements end
	//and where the unnecessary elements begin
	
	/*
	for(auto el : arr)
	{
		cout << el << endl;
	}
	*/
	return 0;
}
