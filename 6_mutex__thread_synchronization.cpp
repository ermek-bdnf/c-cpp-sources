//6. mutex. thread synchronization
#include<iostream>
#include<mutex>
#include<thread> //to work with a thread

using namespace std;

mutex mx;

void Print(char ch)
{
	this_thread::sleep_for(chrono::milliseconds(2000));
	
	mx.lock();

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
	
	mx.unlock();
	
	this_thread::sleep_for(chrono::milliseconds(2000));
}

int main()
{
	thread t1(Print, '*');
	thread t2(Print, '$');
	
	t1.join();
	t2.join();
	
	return 0;
}
