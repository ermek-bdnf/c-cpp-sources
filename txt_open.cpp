#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string line;
	fstream f;
	f.open("CPPConcepts.txt");
	if(f.is_open())
	{
		while(getline(f, line))
		{
			cout << line << endl;
		}
	}
	f.close();
	cout << "\nEnd programm" << endl;
	return 0;
}
