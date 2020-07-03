//88. friendly functions and classes
 
#include<iostream>
#include<string>
using namespace std;

class Test;

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
		
		int GetX()
		{
			return x;
		}
		
		void SetX(int valueX)
		{
			x = valueX;
		}
		
		int GetY()
		{
			return y;
		}
		
		void SetY(int valueY)
		{
			y = valueY;
		}
		
		void Print()
		{
			cout << "X = " << x << "\t\tY = " << y << endl;
		}
		
		//overloading the increment and decrement operators
		
		//prefix form
		Point & operator ++()
		{
			this->x++; //this->x += 1; //this->x = this->x+1;
			this->y++; //this->y += 1; //this->y = this->y+1;
			return *this;
		}
		
		//postfix
		Point & operator ++(int value)
		{
			Point temp(*this);
			
			this->x++;
			this->y++;
			
			return temp;
		}
								
		~Point()
		{
			//delete ;
			cout << this << "\tdestructor called" << endl;
		};
		
		friend void ChangeX(Point &value, Test &testValue);
};

class Test
{
	private:
		int Data = 0;
		
		friend void ChangeX(Point &value, Test &testValue);
};

void ChangeX(Point &value, Test &testValue)
{
	value.x = -1;
	testValue.Data = -1;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	Test test;
	Point a(6, 12);
	a.Print();
	ChangeX(a, test);
	a.Print();
	return 0;
}
