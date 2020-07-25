//10. unique_lock (unique_lock vs lock_guard)
#include<iostream>
#include<mutex>
#include<thread>

using namespace std;

mutex m;

void Funk(char z)
{
	unique_lock<mutex> ul(m, std::defer_lock); //unique_lock constructor	
	this_thread::sleep_for(chrono::milliseconds(2000));
	//unique_lock<mutex> ul(m); //unique_lock constructor
	ul.lock();	
	for(int i=0; i<6; ++i)
	{
		for(int i=0; i<12; i++)
		{
			cout << z;
			this_thread::sleep_for(chrono::milliseconds(10));
		}
		cout << endl;
	}
	cout << endl;
	
	//ul.unlock();
	this_thread::sleep_for(chrono::milliseconds(2000));
} //calling the destructor of lock_guard (ul.unlock())

int main()
{
	thread t1(Funk, '*');
	thread t2(Funk, '$');
	t1.join();
	t2.join();
	
	return 0;
}
