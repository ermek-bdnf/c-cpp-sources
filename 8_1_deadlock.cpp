//8.1 deadlock
#include<iostream>
#include<mutex>
#include<thread> //to work with a thread

using namespace std;

mutex mx;
mutex mx2;

void Funk()
{
	mx.lock();
	this_thread::sleep_for(chrono::milliseconds(1));
	mx2.lock();
	
	for(int i=0; i<6; ++i)
	{
		for(int i=0; i<12; i++)
		{
			cout << '*';
			this_thread::sleep_for(chrono::milliseconds(10));
		}
		cout << endl;
	}
	cout << endl;
	
	mx.unlock();
	mx2.unlock();
}

void Funk2()
{
	mx.lock();
	this_thread::sleep_for(chrono::milliseconds(1));
	mx2.lock();
	
	for(int i=0; i<6; ++i)
	{
		for(int i=0; i<12; i++)
		{
			cout << '$';
			this_thread::sleep_for(chrono::milliseconds(10));
		}
		cout << endl;
	}
	cout << endl;
	
	mx.unlock();
	mx2.unlock();
}

int main()
{
	thread t1(Funk);
	thread t2(Funk2);
	
	t1.join();
	t2.join();
	
	return 0;
}
