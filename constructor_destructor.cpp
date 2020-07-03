//constructor, destructor.
#include<iostream>
using namespace std;

//objects are destroyed in reverse order
class MyClass
{
	int data;
	public:
		MyClass(int value)
		{
			data = value;
			cout << "������: " << data << "\tconstructor called" << endl;
		}
		~MyClass()
		{
			cout << "������: " << data << "\tdestructor called" << endl;
		}
};

int main()
{
	MyClass a(4);
	MyClass b(6);
	return 0;
}
