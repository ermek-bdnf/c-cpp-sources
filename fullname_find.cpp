#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s, name1, name2, name3;
	int n;
	cout << "Enter your full name: ";
	//s = "Aaaaaaa Bbbbbb Cccccc"; 
	getline(cin, s);
	s = s.substr(0, s.find(' ')) + ' ' + s.substr(s.find(' ')+ 1, 1)+ '.' + s.substr(s.find_last_of(' ') + 1, 1) + '.';
	cout << s;
	return 0;
}
