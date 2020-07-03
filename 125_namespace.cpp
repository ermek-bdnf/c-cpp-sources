//125. namespace
//global namespace
#include<iostream>
using namespace std;
//the namespace std contains all standard classes and functions

namespace firstNS
{
	void Funk()
	{
		cout << "Funk() firstNS" << endl;
	}
}

namespace secondNS
{
	void Funk()
	{
		cout << "Funk() secondNS" << endl;
	}
}

namespace thirdNS
{
	namespace secondNS
		{
			void Funk()
			{
				cout << "Funk() secondNS in thirdNS" << endl;
			}
		}
}

using namespace secondNS;

int main()
{
	setlocale(LC_ALL, "Russian");
	thirdNS::secondNS::Funk();
	Funk(); // secondNS::Funk();
	return 0;
}
