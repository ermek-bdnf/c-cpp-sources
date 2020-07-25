//11.2 stack stl
#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
using namespace std;

int main()
{
	stack<int, deque<int>> st;
		
	st.emplace(14);
	st.emplace(18);
	st.push(39);
	//auto a = st._Get_container();
	//cout << st[2] << endl;
	
	/*
	while(!st.empty())
	{
		cout << st.top() << endl; 
		st.pop();
	}
	/*
	cout << st.size() << endl;
	cout << st.top() << endl;
	st.pop();
	cout << st.size() << endl;
	cout << st.top() << endl;
	*/
	return 0;
}
