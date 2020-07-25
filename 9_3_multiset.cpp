//9. multiset
#include<iostream>
#include<vector>
#include<set> // set, multiset
using namespace std;

int main()
{
	multiset<int> myMultiset = {0, 1, 1, 66, 16, 48, 99};
	auto a = myMultiset.equal_range(1); 
		
	//auto it1 = myMultiset.lower_bound(1); //returns element 1
	//auto it2 = myMultiset.upper_bound(1); //returns element 16
	//myMultiset.insert(6);
	//myMultiset.insert(6);
	//myMultiset.insert(6);
	for(auto &el : myMultiset)
	{
		cout << el << endl;
	}
	return 0;
}
