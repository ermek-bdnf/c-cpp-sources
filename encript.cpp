#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string s;
	cout << "Enter a word: ";
	cin >> s;
	for(int i = 0 ; i < s.length(); i++){
		if(s[i] == 'Z') s[i] = 'A';
		else s[i]++;
	}
	cout << s;
	return 0;
}
