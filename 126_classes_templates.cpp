//126. class template

#include<iostream>
#include<string>
using namespace std;

class Point
{
	public:
		Point() //default constructor
		{
			x = y = z = 0;
		}
		Point(int x, int y, int z) //constructor with parameters
		{
			this->x = x;
			this->y = y;
			this->z = z;
		}
		int x;
		int y;
		int z;
};

//template<class T>

template<typename T1, typename T2>
class MyClass
{
	public:
		MyClass(T1 value, T2 value2)
		{
			this->value = value;
			this->value2 = value2;
		}
		
		void DataTypeSize()
		{
			//cout << "the value: " << value << "\t\ttakes up " << sizeof(value) << " byte(s)" << endl;
			cout << "value: " << sizeof(value) << " byte(s)" << endl;
			cout << "value2: " << sizeof(value2) << " byte(s)" << endl;
		}
		
		T1 Funk()
		{
			return value;
		}
		T2 Funk2()
		{
			return value2;
		}
		
	private:
		T1 value;
		T2 value2;
};

int main()
{
	int a = 666;
	//Point p;
	string st = "NWO";
	//MyClass<int, Point> c(a, p);
	MyClass<int, string> c(a, st);
	c.DataTypeSize();
	
	int b = c.Funk();
	cout << "Funk() returned " << b << endl;
	string d = c.Funk2();
	cout << "Funk2() returned " << d << endl;
	
	/*
	Point p; //variable 'p' of the 'Point' type
	MyClass<Point> c(p);
	c.DataTypeSize();
	*/
	/*
	int a = 666;
	double d = 666.666;
	char b = 'g';
	string st = "New World Order";
	MyClass<int> z(a);
	z.DataTypeSize(); //byte(s)
	MyClass<double> dl(d);
	dl.DataTypeSize(); //byte(s)
	MyClass<char> c(b);
	c.DataTypeSize(); //byte(s)
	MyClass<string> s(st);
	s.DataTypeSize(); //byte(s)
	*/
	return 0;
}
