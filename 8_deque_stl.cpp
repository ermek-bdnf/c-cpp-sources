//8. deque
#include<iostream>
#include<vector>
#include<deque>

using namespace std;

int main()
{
	deque<int> dq = {444, 666, 9};
	//deque<int>::iterator it;
	dq.push_front(666);
	for(auto el : dq)
	{
		cout << el << endl;
	}
	return 0;
}
