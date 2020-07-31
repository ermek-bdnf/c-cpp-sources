#include<iostream>
#include<fstream>

using namespace std;

void func()
{
	string file_name;
	cout << "File name: ";
	getline(cin, file_name);
	string line;
	fstream f;
	//f.open("C++ concepts.txt");
	f.open(file_name);
	if(!f.is_open())
	{
		cout << "not found\n";
		//cin.get();
		system("pause");
		system("cls");
		return func();
	}
	else
	{
		cout << "\n";
		while(getline(f, line))
		{
			cout << line << endl;
		}
	}
	f.close();
}

int main()
{
	setlocale(LC_ALL, "Russian");
	func();
	cout << "\nEnd programm" << endl;
	return 0;
}
