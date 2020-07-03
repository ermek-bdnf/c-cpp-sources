//85. overloading + operators.
 
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
		
		//overloading the + operator
		Point operator +(const Point &other)
		{
			Point temp;
			temp.x = this->x + other.x;
			//this->x 		a
			//other.x		b 
			temp.y = this->y + other.y; 
			//this->y 		a
			//other.y		b
			return temp;
			//this->a 		//a
			//this->other 	//b
			//short version
			//return !(this->x == other.x && this->y == other.y);
		}
						
		~Point()
		{
			//delete ;
			cout << this << "\tdestructor called" << endl;
		};
};

int main()
{
	Point a(6, 1);
	Point b(9, 4);
	Point z = a + b; 
	//Point z = a.operator +(b); //analog Point z = a + b;
	
	//cout << z << endl;
	/*  //analog bool result = a == b;
	if(a == b)
	{
		result = true;
	}
	else
	{
		result = false;
	}
	*/
	return 0;
}
