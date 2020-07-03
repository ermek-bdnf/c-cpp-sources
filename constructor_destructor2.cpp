#include<iostream>
using namespace std;

class MyClass
{
	private:
		int* data;
	public:
		MyClass(int size) //dynamic array
		{
			data = new int[size];
			
			cout << "Output of array elements (from 0 to " << size - 1 << "):" << endl;
			for(int i=0; i<size; i++)
			{
				data[i] = i;
				cout << i << endl;
			}
			cout << data << " - address of the array in dynamic memory" << endl;
			cout << "Object: " << data << "\tconstructor called" << endl;
		}
		~MyClass()
		{
			delete[] data; //freeing up memory allocated for the array
			cout << "freeing up memory allocated for the array" << endl;
			cout << "Object: " << data << "\tdestructor called" << endl;
		}
};

void Funk()
{
	cout << "Funk - getting started" << endl;
	int z;
	cout << "Output the number of array elements: ";
	cin >> z;
	MyClass a(z);
	cout << "Funk - the end of the execution" << endl;
}

int main()
{
	Funk();
	return 0;
}
