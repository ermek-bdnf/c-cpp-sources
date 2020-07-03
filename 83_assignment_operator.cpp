//assignment operator
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
		
		cClass & operator = (const cClass &other)
		{
			cout << "Object: " << this << "\toperator '=' is called" << endl;
			this->Size = other.Size;
			if(this->data!=nullptr)
			{
				delete[] this->data;
			}
			
			this->data = new int[Size];
			for(int i=0; i<Size; i++)
			{
				data[i] = i;
			}
			return *this;
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
	cClass b(2);
	a = b;	
	cClass z(2);
	cClass zz(4);
	
	int q = 1;
	int w;
	int e;
	e = w = q;
	
	return 0;
}
