//19 accumulate

#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<string>
#include<numeric> //accumulate
using namespace std;

//sum of even elements
//this algorithm can also work with strings

int main()
{
	int m[] = {2,3,4};
	string result = accumulate(next(begin(m)), end(m), to_string(m[0]), 
	[](string a, int b)
	{
		return a + "-" + to_string(b);
	});
	cout << result << endl;
	//next(begin(m)) or next(m)
	/*
	auto result = accumulate(begin(m), end(m), 0, 
	[](int a, int b)
	{
		if(b % 2 == 0)
		{
			return a + b;
		}
		else
		{
			return a; //current state of data
		}
	});
	cout << result << endl;
	/*
	int m[] = {2,3,4};
	auto result = accumulate(begin(m), end(m), 1, 
	[](int a, int b)
	{
		return a * b;
	});
	// the third parameter of the function is accumulate.
	cout << result << endl;
	/*
	int m[] = {2,3,4};
	auto result = accumulate(begin(m), end(m), 0);
	cout << "sum: " << result << endl;
	/*
	const int SIZE = 3;
	int arr[SIZE] = {2, 4, 9};
	auto result = accumulate(begin(arr), end(arr), 0);
	cout << "sum: " << result << endl;
	/*
	vector<int> v = {2, 3, 4};
	//list<int> lst = {4,7,77,-3,44,74};
	//auto result = accumulate(lst.begin(), lst.end());
	auto result = accumulate(v.begin(), v.end(), 0);
	//0 is the reference point
	//if zero, then 0 + the sum of all elements
	cout << "sum: " << result << endl; //0 + sum of elements
	auto result2 = accumulate(begin(v), v.end(), 10);
	cout << "sum: " << result2 << endl; // 10 + sum of elements
	*/
	return 0;
}
