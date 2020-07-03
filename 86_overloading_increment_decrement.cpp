//86. overloading increment decrement.
 
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
};

int main()
{
	Point a(1, 1);
	a++;
	//Point b = a++;
	
	//++a;
	//Point b = a;
	
	return 0;
}
