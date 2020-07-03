//84. overloading == and != operators.
 
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
		
		//overloading the equality operator
		//Point & operator ==(const Point &other)
		bool operator !=(const Point &other)
		{
			//short version
			return !(this->x == other.x && this->y == other.y);
			
			//long version
			/*
			if(this->x != other.x && this->y != other.y)
			{
				return true;
			}
			else
			{
				return false;
			}
			*/
		}
		
		/*
		bool operator ==(const Point &other)
		{
			//short version
			return this->x == other.x && this->y == other.y;
			
			//long version
			/*
			if(this->x == other.x && this->y == other.y)
			{
				return true;
			}
			else
			{
				return false;
			}
			
		}
		*/
				
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
	bool result = a != b;
	
	cout << result << endl;
	
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
