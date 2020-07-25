//20_1 equal
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
	bool result = equal(begin(arr), end(arr), begin(arr2), end(arr2));
	if(result == true)
	{
		cout << "collections are identical" << endl;
	}
	else
	{
		cout << "collections are not identical" << endl;
	}
	/*
	bool result = equal(begin(arr), end(arr), 
	[](int a, int b){
		return a == b;	
	});
	if(result == true)
	{
		cout << "collections are identical" << endl;
	}
	else
	{
		cout << "collections are not identical" << endl;
	}
	*/
	/*
	int arr[] = {2,3,4,6,9,12};
	int arr2[] = {2,3,4,6,9,12,2};
	//bool result = equal(begin(arr), end(arr), begin(arr));
	bool result = equal(begin(arr), end(arr), begin(arr2), end(arr2));
	cout << result << endl;
	*/
	//cout << result << endl;
	return 0;
}
