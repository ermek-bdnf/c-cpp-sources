#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	//try ... catch
	
	ifstream a;
	a.exceptions(ifstream::badbit | ifstream::failbit);
	
	try
	{
		cout << "Trying to open a file\n";
		a.open("text.txt"); //basic_ios::clear
		//a.open("src.txt"); //The file was opened successfully
		cout << "The file was opened successfully\n";
		a.close();
	}
	catch(const exception& e)
	{
		cout << e.what() << endl; //basic_ios::clear
	}
	
	return 0;

}

