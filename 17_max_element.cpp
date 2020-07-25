//17. max_element
#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<string>
using namespace std;
//max_element - search for the maximum element
//vector - this is a wrapper for a dynamic array
//list - this is a doubly linked list.

int main()
{
	//vector<int> v = {10,1,-55,11,13,58};
	//list<int> lst = {4,7,77,-3,44,74};
	//auto result = max_element(v.begin(), v.end());
	//auto result = max_element(lst.begin(), lst.end());
	const int SIZE = 6;
	int arr [SIZE] = {10,1,-55,11,13,58};
	auto result = max_element(arr, arr + SIZE);
	cout << *result << endl;
	//the result is an iterator. To get not the iterator object itself, 
	//but the data that is there when output to the console, that is, 
	//a specific number, you need to dereferend (*)
	return 0;
}
