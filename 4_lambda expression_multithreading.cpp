//4.Lambda expression. Getting the results of the function from the stream.
#include<iostream>
#include<thread> //to work with a thread
//#include<chrono> //to work with time
using namespace std;

int Funk(int a, int b)
{
	this_thread::sleep_for(chrono::seconds(2));
	cout << "ID of thread: " << this_thread::get_id() 
	<< "\tFunk started\t" << endl;
	this_thread::sleep_for(chrono::seconds(4));
	cout << "ID of thread: " << this_thread::get_id() 
	<< "\tFunk ended\t" << endl;
	return a + b;
}

int main()
{
	int result; // = Funk(4,12);
	thread th([&result]()
	{ 
		result = Funk(4, 12); 
	});
		
	for(size_t i = 0; i<12; i++)
	{
		cout << "ID of thread: " << this_thread::get_id() << "\tmain works\t"
		 << i << endl;
		 
		this_thread::sleep_for(chrono::milliseconds(600));
	}
	th.join();
	
	cout << "Funk: " << result << endl;
	
	return 0;
}
