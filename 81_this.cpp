//this
#include<iostream>
using namespace std;

class Point
{
	public:
		Point()
		{
			x = 0;
			y = 0;
			cout << this << " constructor" << endl;
		}
		
		Point(int x, int y)
		{
			this->x = x;
			this->y = y;
			cout << this << " constructor" << endl;
		}
		
		int GetX()
		{
			return x;
		}
		int GetY()
		{
			return y;
		}
		void SetX(int x)
		{
			this->x = x;
		}
		void SetY(int y)
		{
			this->y = y;
		}
		void Print()
		{
			cout << "Print() - started" << endl;
			cout << "X = " << x << "\tY = " << y << endl;
			cout << "Print() - ended" << endl;
		}
		
		~Point()
		{
			cout << this << " destructor" << endl;
		}
		
	private:
		int x;
		int y;	
};

int main()
{
	setlocale(LC_ALL, "Russian");
	//srand(time(NULL));
	Point a;
	Point b(6,6);
	a.Print();
	b.Print();
	return 0;
}
