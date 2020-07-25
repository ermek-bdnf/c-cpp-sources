//18_1 min_element
#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<string>
using namespace std;
//min_element - search for the minimum element
//vector - this is a wrapper for a dynamic array
//list - this is a doubly linked list.

int main()
{
	//vector<int> v = {10,1,-55,11,13,58};
	//list<int> lst = {4,7,77,-3,44,74};
	//auto result = min_element(lst.begin(), lst.end());
	//auto result = min_element(v.begin(), v.end());
	const int SIZE = 6;
	int arr[SIZE] = {10,1,-55,11,13,58};
	auto result = min_element(arr, arr + SIZE);
	//pointer to the beginning of the array - arr (array name),
	//the array name is a pointer to the beginning of the array.
	//pointer to the end of the array - arr + SIZE
	cout << *result << endl;
	//the result is an iterator. To get not the iterator object itself, 
	//but the data that is there when output to the console, that is, 
	//a specific number, you need to dereferend (*).
	return 0;
}
