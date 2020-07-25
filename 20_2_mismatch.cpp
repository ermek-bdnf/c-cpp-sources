//20_2 mismatch
#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;

//comparison for equality of two sequences

int main()
{
	//list<int> lst = {2,3,4,6,9,12};
	int arr[] = {12,3,4,6,9,2};
	int arr2[] = {2,3,4,6,9,12};
	//vector<int> v = {12,3,4,6,9,2};
	sort(begin(arr), end(arr));
	sort(begin(arr2), end(arr2));
	auto result = mismatch(begin(arr), end(arr), begin(arr2), end(arr2));
	/*
	[](int i, int j)
		{
			return i == j;
		});
	/*
	[](const arr2)
	{
		return end(arr) == end(arr2);
	});
	*/
	if(result.first == end(arr) && result.second == end(arr2))
	{
		cout << "+" << endl;
	}
	else
	{
		cout << "-" << endl;
	}
	/*
	if(result == true)
	{
		cout << "collections are identical" << endl;
	}
	else
	{
		cout << "collections are not identical" << endl;
	}
	*/
	return 0;
}
