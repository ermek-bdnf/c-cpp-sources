//127. inheritance of templates
#include<iostream>
#include<string>
#include<typeinfo>
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

template<class T1>
class TypeSize
{
	public:
		TypeSize(T1 value)
		{
			this->value = value;
		}
		
		void DataTypeSize()
		{
			cout << "value: " << sizeof(value) << " byte(s)" << endl;
		}
		
		/*
		T1 Funk()
		{
			return value;
		}
		*/
				
	protected:
		T1 value;
};

template<class T1>
class TypeInfo : public TypeSize<T1>
{
	public:
		TypeInfo(T1 value) : TypeSize<T1>(value) //TypeInfo(T1 value) : TypeSize(value) //TypeSize<T1>::TypeSize(value)
		//TypeSize<T1>::TypeSize::TypeSize::TypeSize(value)
		{
			
		}
		void ShowTypeName()
		{
			cout << "type: " << typeid(this->value).name() << endl;
		}
};

int main()
{
	//Point a;
	//TypeInfo<Point> c(a);
	unsigned int a = 6;
	TypeInfo<unsigned int> c(a);
	c.ShowTypeName();
	c.DataTypeSize();
	/*
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
	*/
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
