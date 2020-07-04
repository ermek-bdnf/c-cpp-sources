//1. multithreading
#include<iostream>
#include<thread> //to work with a thread
#include<chrono> //to work with time

using namespace std;

int main()
{
	int count;
	cout << "Enter the number of repetitions for the thread: ";
	cin >> count;
	int time;
	cout << "Enter the time (in seconds) to pause the thread: ";
	cin >> time;
	for(size_t i = 0; i < count; i++)
	{
		this_thread::sleep_for(chrono::seconds(time));
		cout << "ID of thread: " << this_thread::get_id() << "\t(main())" << endl;
		//this_thread::sleep_for(chrono::seconds(time));
	}
	
	return 0;
}
