//11.1 stack stl, adatters, containers
#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
using namespace std;

int main()
{
	stack<int> st;	
	st.emplace(14);
	st.emplace(18);
	st.push(39); //push 666 first creates a copy of the object,
				//and then transfers it to the collection
	/*
	while(!st.empty())
	{
		cout << st.top() << endl; 
		//viewing the last item
		
		st.pop();
		//retrieving the last element
	}
	/*
	cout << st.size() << endl;
	cout << st.top() << endl; //viewing the last item
	st.pop(); //deleting the last item on the stack
	cout << st.size() << endl;
	cout << st.top() << endl; //viewing the last item
	*/
	return 0;
}
