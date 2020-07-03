//87. overloading the indexing operator
 
#include<iostream>
#include<string>
using namespace std;

class Point
{
	private:
		int x;
		int y;
	public:
		
		Point()
		{
			x = 0;
			y = 0;
			cout << this << "\tconstructor called" << endl;
		}
		
		Point(int x, int y)
		{
			this->x = x;
			this->y = y;
			cout << this << "\tconstructor called" << endl;
		};
										
		~Point()
		{
			//delete ;
			cout << this << "\tdestructor called" << endl;
		};
};

class TestClass
{
	public:
		
		int & operator[](int index)
		{
			return arr[index];
		}
				
	private:
		int arr[4]{4,9,4444,666};
};

int main()
{
	TestClass a;
	cout << a[3] << endl;
	return 0;
}
