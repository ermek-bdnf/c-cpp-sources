#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
int main(int argc, char* argv[])
{
	double t[59][2];
	double s[13311][2];
    string str;
    fstream f;
	
	f.open("template.txt");
	for(int i=0;i<59;i++)
	{
		getline(f, str);
		t[i][0] = stod(str.substr(0, 4));
		t[i][1] = stod(str.substr(5, -1));
	}
	f.close();
	
	f.open("src.txt");
	for(int i=0;i<13311;i++)
	{
		getline(f, str);
		s[i][0] = stod(str.substr(0, 4));
		for (int a = 0; a < 59; a++)
		{
			if(int(s[i][0]) == int(t[a][0]))
			{
				s[i][1] = t[a][1];
				break;
			}
		}
	}
	f.close();
	
	for(int i=0;i<13311;i++)
	{
		cout << s[i][0] << " " << s[i][1] << endl;
	}
	
	ofstream infile("src_template.txt");
	infile.is_open();
	for (int i=0; i<13311; i++)
 	{
 		infile << s[i][0]<< " " << s[i][1] << endl;
	}
	infile.close();
	return 0;
}
//while(getline(f, str))
	//cout << str.substr(0, 4) << endl;
