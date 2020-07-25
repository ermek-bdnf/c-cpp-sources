//9. set2
#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main()
{
	set<int> mySet = {6, 12, -6, 0};
	//mySet.erase(-6);
	//mySet.insert(-2);
	//mySet.erase(666);
	auto result = mySet.erase(444);//erase() return size_t
	auto result = mySet.insert(444);
	//insert return true or false.
	for (auto &el : mySet)
	{
		cout << el << endl;
	}
	//auto it = mySet.find(10);
	/*int value;
	cout << "Enter a number: ";
	cin >> value;
	if (mySet.find(value) != mySet.end())
	{
		cout << "the number " << value << " is found" << endl;
	}
	else
	{
		cout << "the number " << value << " is missing" << endl;
	}
	mySet.end();
	*/
	return 0;
}
