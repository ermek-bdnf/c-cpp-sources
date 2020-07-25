//3. stl. list3
#include<iostream>
#include<vector>
#include<list>
using namespace std;

template<typename T>
void PrintList(const list <T> &lst)
{
	for(auto i = lst.cbegin(); i != lst.cend(); ++i)
	{
		cout << *i << endl;
	}
}

int main()
{
	list<int> myList = {33, 44};
	cout<<endl<<"original list"<<endl;
	PrintList(myList);
	list<int> myList2 = {6, 66};
	cout<<endl<<"myList2"<<endl;
	PrintList(myList2);
	cout<<endl<<"replacement assign original list"<<endl;
	myList.assign(myList2.begin(), myList2.end());
	PrintList(myList);
	/*myList.assign(2, 666);
	cout<<endl<<"assign"<<endl;
	PrintList(myList);
	/*cout<<endl<<"insert"<<endl;
	auto it = myList.begin();
	advance(it,2);
	myList.insert(it, 666);
	PrintList(myList);
	cout<<endl<<"remove"<<endl;
	myList.remove(33);
	PrintList(myList);
	/*cout<<endl<<"erase"<<endl;
	advance(it,3);
	myList.erase(it);
	PrintList(myList);
	/*auto it = myList.begin();
	myList.insert(it, 666);
	PrintList(myList);
	cout<<endl;
	
	auto it = myList.begin();
	++it;
	myList.insert(it, 666);
	PrintList(myList);
	*/
	return 0;
}
