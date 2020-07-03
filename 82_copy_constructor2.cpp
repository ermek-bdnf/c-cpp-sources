//copy constructor
#include<iostream>
#include<ctime>
using namespace std;

class cClass
{
	private:
		int Size;
	public:
		int *data;
		
		cClass(int size)
		{
			this->Size = size;
			this->data = new int[size];
			for(int i=0; i<size; i++)
			{
				data[i] = i;
			}
			cout << "Object: " << this << "\tconstructor called" << endl;
		};
		
		cClass(const cClass &other)
		{	
			this->Size = other.Size;
			
			this->data = new int[other.Size];
			for(int i=0; i<other.Size; i++)
			{
				this->data[i] = other.data[i];
			}
			cout << "Object: " << this << "\tcopy constructor called" << endl;
		}
				
		~cClass()
		{
			delete[] data;
			cout << "Object: " << this << "\tdestructor called" << endl;
		};
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
	cClass a(10);
	cClass b(a); 
	return 0;
}
