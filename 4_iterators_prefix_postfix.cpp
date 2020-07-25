//4. stl. itetators, prefix vs postfix
#include<iostream>
#include<vector>
#include<list>
using namespace std;

template<typename T>
void PrintList(list <T> &lst)
{
	for(auto i = lst.begin(); i != lst.end(); ++i)
	{
		cout << *i << endl;
	}
}

int main()
{
	//list<int>::iterator it;
	//it++;
	//++it;
	int a = 6;
	//cout << a++ << endl; //6
	//cout << a << endl; //7
	cout << ++a << endl; //7
	cout << a << endl; //7
	return 0;
}
/*
List_iterator operator++()
{	//preincrement
	++(*(_Mybase *)this);
	return (*this);
}
List_iterator operator++(int)
{	//postincrement
	List_iterator _Tmp = *this;
	++*this;
	return (_Tmp);
}
*/
