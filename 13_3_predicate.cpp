//13.3 predicates 1
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool GreaterThanZero(int a)
{
	return a > 0;
}
bool LessThanZero(int a)
{
	return a < 0;
}

int main()
{
	vector<int> v = {-2, 7, 9, -14, -20, 33};
	//int result = count_if(v.begin(), v.end(), GreaterThanZero);
	//cout << "the number of numbers greater than 0 is equal to: " << result << endl;
	int result = count_if(v.begin(), v.end(), LessThanZero);
	cout << "the number of numbers less than 0 is equal to: " << result << endl;
	//cout << GreaterThanZero(-1) << endl;
	// 0 - false, 1 - true
	return 0;
}
