//3 return results of the stream function of the flow
#include<iostream>
#include<thread> //to work with a thread
//#include<chrono> //to work with time
using namespace std;

void Funk(int &a)
{
	this_thread::sleep_for(chrono::seconds(2));
	cout << "ID of thread: " << this_thread::get_id() 
	<< "\tFunk started\t" << endl;
	this_thread::sleep_for(chrono::seconds(4));
	a = a * 2; //a *= 2;
	cout << "ID of thread: " << this_thread::get_id() 
	<< "\tFunk ended\t" << endl;
}

int main()
{
	int z = 6;
	
	thread th(Funk, std::ref(z));
	//th.detach()
	for(size_t i = 0; i<12; i++)
	{
		cout << "ID of thread: " << this_thread::get_id() << "\tmain works\t"
		 << i << endl;
		 
		this_thread::sleep_for(chrono::milliseconds(600));
	}
	
	th.join();
	cout << z << endl;
	
	return 0;
}
