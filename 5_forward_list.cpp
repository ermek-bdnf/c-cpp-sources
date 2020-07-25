//5. forward_list
#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
	//forward_list<int> fl;
	forward_list<int> fl = {666, 666};
	//forward_list<int>::iterator it = fl.begin();
	forward_list<int>::iterator it = fl.before_begin();
	//fl.erase_after(it);
	fl.insert_after(it, 660066);
	//cout << *it << endl;
	//cout << endl << "----" << endl << endl;
	for (auto el : fl)
	{
		cout << el << endl;
	}
	/*cout << endl << "----" << endl << endl;
	fl.push_front(6);
	fl.push_front(999);
	forward_list<int>::iterator it = fl.begin();
	cout << *it << endl;
	it++;
	cout << *it << endl;
	it++;
	cout << *it << endl;
	/*for (auto el : fl)
	{
		cout << el << endl;
	}*/
	return 0;
}
