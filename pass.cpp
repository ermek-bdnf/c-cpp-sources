#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	char test[] = {'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F', 'f', 'G', 
	'g', 'H', 'h', 'I', 'i', 'J', 'j', 'K', 'k', 'L', 'l', 'M', 'm', 'N', 'n', 'O', 
	'o', 'P', 'p', 'Q', 'q', 'R', 'r', 'S', 's', 'T', 't', 'U', 'u', 'V', 'v', 'W', 
	'w', 'X', 'x', 'Y', 'y', 'Z', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	
	unsigned short Pass, Char,
		size = sizeof(test) / sizeof(test[0]);
	srand(time(0));
	
	cout << "Number of passwords: ";
	cin >> Pass;
	
	cout << "Number of characters in the password: ";
	cin >> Char;
	const unsigned short SaveChar = Char;
	ofstream outFile("PassGen.txt");
		for(; Pass > 0; Pass--)
		{
			for(; Char > 0; Char--)
			{
				outFile << test[rand() % size];
			}
			if(Char == 0)
			{
				Char = SaveChar;
				outFile << endl;
			}
		}
	outFile.close();
	cout << "passwords are saved in a file PassGen.txt" << endl;
	return 0;
}
