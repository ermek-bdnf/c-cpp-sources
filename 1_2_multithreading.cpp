//1.2 multithreading
#include<iostream>
#include<thread> //to work with a thread
#include<chrono> //to work with time


using namespace std;

void Funk()
{
	int time = 2;
	for(size_t i = 0; i < 4; i++)
	{
		this_thread::sleep_for(chrono::seconds(time));
		cout << "ID of thread: " << this_thread::get_id() << "\t(Funk())\t" << i << " time: " << time << "sec" <<endl;
		//this_thread::sleep_for(chrono::seconds(time));
	}
}

int main()
{
	thread th(Funk);
	thread th2(Funk);
	//th.detach();
	int time = 1;
	//Funk();
	for(size_t i = 0; i < 4; i++)
	{
		this_thread::sleep_for(chrono::seconds(time));
		cout << "ID of thread: " << this_thread::get_id() << "\t(main())\t" << i << " time: " << time << "sec" << endl;
		//this_thread::sleep_for(chrono::seconds(time));
	}
	
	th.join();//Funk();
	th2.join();//Funk();
	
	return 0;
}
