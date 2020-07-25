//2 threads with parameters
#include<iostream>
#include<thread> //to work with a thread
#include<chrono> //to work with time


using namespace std;

void Funk(int a, int b, string st)
{
	this_thread::sleep_for(chrono::seconds(2));
	cout << "\tFunk started" << endl;
	this_thread::sleep_for(chrono::seconds(4));
	cout << "a + b = " << a + b << " " << st << endl;
	this_thread::sleep_for(chrono::seconds(1));
	cout << "\tFunk ended" << endl;
}

int main()
{
	thread th(Funk, 2, 4, "hello world");
	
	//Funk(2,4);
	for(size_t i = 0; true; i++)
	{
		cout << "ID of thread: " << this_thread::get_id() << "\tmain works\t"
		 << i << endl;
		 
		this_thread::sleep_for(chrono::milliseconds(600));
	}
	
	th.join();
	return 0;
}
