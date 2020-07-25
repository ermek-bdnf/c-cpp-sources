//7. containers
#include<iostream>
#include<array>

using namespace std;

int main()
{
	array<int, 4> arr = {123, 444, 666, 9};
	array<int, 4> arr2 = {123, 444, 666, 9};
	array<int, 4> arr3 = {123, 444, 666, 11};
	array<int, 4> arr4 = {123, 444, 666, 12};
	bool result = arr == arr2;
	if (result != true) cout << "False" << endl;
	else cout << "True" << endl;
	cout << result << endl;
	bool result2 = arr3 == arr4;
	if (result2 != true) cout << "False" << endl;
	else cout << "True" << endl;
	cout << result2;
	return 0;
}
