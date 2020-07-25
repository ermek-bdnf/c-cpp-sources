//3. stl. list
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
	myList.push_back(6666); //end
	myList.push_front(666666); //begin
	cout << "******"<<endl;
	cout<<" list size: "<<myList.size()<<endl;
	cout << "******"<<endl;
	//myList.sort();
	//myList.reverse();
	//myList.clear();
	PrintList(myList);
	cout<<"pop_front"<<endl;
	myList.pop_front();
	PrintList(myList);
	cout<<"pop_back"<<endl;
	myList.pop_back();
	PrintList(myList);
	//list<int>::iterator it = myList.begin();
	//cout<<*it;
	cout << "******"<<endl;
	//auto - list<int>::iterator
	for(auto i = myList.begin(); i != myList.end(); i++)
	{
		cout << *i << endl;
	}
	cout << "******"<<endl;
	cout<<" list size: "<<myList.size()<<endl;
	cout << "******"<<endl;
	return 0;
}
