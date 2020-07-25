//5.2 threads and methods of the class
#include<iostream>
#include<thread> //to work with a thread
//#include<chrono> //to work with time
using namespace std;

class thClass
{
	public:
		void Funk()
		{
			this_thread::sleep_for(chrono::seconds(2));
			cout << "ID of thread: " << this_thread::get_id() 
			<< "\tFunk started\t" << endl;
			this_thread::sleep_for(chrono::seconds(4));
			cout << "ID of thread: " << this_thread::get_id() 
			<< "\tFunk ended\t" << endl;
		}
		void Funk2(int a)
		{
			this_thread::sleep_for(chrono::seconds(2));
			cout << "ID of thread: " << this_thread::get_id() 
			<< "\tFunk2 started\t" << endl;
			this_thread::sleep_for(chrono::seconds(4));
			cout << "Value of the Funk2 function parameter: " << a << endl;
			cout << "ID of thread: " << this_thread::get_id() 
			<< "\tFunk2 ended\t" << endl;
		}
		
		int Sum(int a, int b)
		{
			this_thread::sleep_for(chrono::seconds(2));
			cout << "ID of thread: " << this_thread::get_id() 
			<< "\tSum started\t" << endl;
			this_thread::sleep_for(chrono::seconds(6));
			cout << "ID of thread: " << this_thread::get_id() 
			<< "\tSum ended\t" << endl;
			return a + b;
		}
};

int main()
{
	thClass th;
	
	thread t(&thClass::Funk2, th, 666);
	//analog
	/*
	thread t([&]()
	{
		th.Funk2(666);
	});
	*/
	
	for(size_t i = 0; i<12; i++)
	{
		cout << "ID of thread: " << this_thread::get_id() << "\tmain works\t"
		 << i << endl;
		 
		this_thread::sleep_for(chrono::milliseconds(600));
	}
	
	t.join();
	
	return 0;
}
