//3. stl. list2
#include<iostream>
#include<vector>
#include<list>

using namespace std;

/*template<typename T>
void PrintList(list <T> &lst)
{
	for(auto i = lst.begin; i! = lst.end; ++i)
	{
		cout << *i << endl;
	}
}*/

int main()
{
	list<int> myList;// = {33, 44, 66};
	myList.push_back(6666);
	myList.push_front(18);
	//PrintList(myList);
	list<int>::iterator it = myList.begin();
	cout<<*it;
	/*for(auto i = lst.cbegin; i! = lst.cend; i++)
	{
		cout << *i << endl;
	}*/
	return 0;
}
