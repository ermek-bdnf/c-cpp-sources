//copy constructor

#include<iostream>
#include<ctime>
using namespace std;

class cClass
{
	public:
		int data;
		
		cClass(int data)
		{
			this->data = data;
			cout << "Object: " << this << "\tconstructor called" << endl;
		}
		
		~cClass()
		{
			cout << "Object: " << this << "\tdestructor called" << endl;
		}
};

void Funk(cClass value)
{
	cout << "function Funk is called" << endl;
}

cClass Funk2()
{
	cout << "function Funk2 is called" << endl;
	cClass temp(2);
	return temp;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	
	cClass a(1);
	cClass b(a);
	
	return 0;
}
