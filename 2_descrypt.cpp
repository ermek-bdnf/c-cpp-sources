#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string input_filename, output_filename, key;
	cout << "�������� ����? ";
	cin >> input_filename;
	cout << "����? ";
	cin >> key;
	cout << "�������� ����? ";
	cin >> output_filename;
	ifstream in(input_filename.c_str(), ios::binary);
	ofstream out(output_filename.c_str(), ios::binary);
	char c;
	int k = 0;
	while(in.get(c))
	{
		out << char(key[k++] ^ c);
		if(k == key.length()) k = 0;
	}
	cout << "������ ������������ �������� � ����: " << output_filename << endl;
	return 0;
}
