//9. recursive_mutex
#include<iostream>
#include<mutex>
#include<thread>

using namespace std;

recursive_mutex rm;

void Funk(int z)
{
	rm.lock();
	cout << z << " ";
	this_thread::sleep_for(chrono::milliseconds(400));
	if(z<=1)
	{
		cout << endl;
		rm.unlock();
		return;
	}
	z--;
	Funk(z);
	rm.unlock();
}

int main()
{
	thread t1(Funk, 12);
	thread t2(Funk, 12);
	t1.join();
	t2.join();	
	
	//Funk(12);
	return 0;
}
