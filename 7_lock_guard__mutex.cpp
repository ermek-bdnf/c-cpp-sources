//7. lock_guard. mutex.
#include<iostream>
#include<mutex>
#include<thread> //to work with a thread

using namespace std;

mutex mx;

void Print(char ch)
{
	this_thread::sleep_for(chrono::milliseconds(20));
	
	{
		lock_guard<mutex> guard(mx); //lock_guard constructor
		for(int i=0; i<6; ++i)
		{
			for(int i=0; i<12; i++)
			{
				cout << ch;
				this_thread::sleep_for(chrono::milliseconds(20));
			}
			cout << endl;
		}
		cout << endl;
	} //calling the destructor of lock_guard
		
	this_thread::sleep_for(chrono::milliseconds(20));
}

int main()
{
	thread t1(Print, '*');
	thread t2(Print, '$');
	
	t1.join();
	t2.join();
	
	return 0;
}
