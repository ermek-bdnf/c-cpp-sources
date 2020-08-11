#include<iostream>
#include<fstream>

int main()
{
	setlocale(LC_ALL, "rus");
	//try ... catch
	ifstream a;
	a.exceptions(ifstream::badbit | ifstream::failbit);
	try
	{
		std::cout << "Trying to open a file\n";
		a.open("text.txt"); //basic_ios::clear
		//a.open("src.txt"); //The file was opened successfully
		std::cout << "The file was opened successfully\n";
		a.close();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl; //basic_ios::clear
	}
	return 0;
}
