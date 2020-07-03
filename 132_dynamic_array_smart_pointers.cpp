//132. dynamic arrays, smart pointers
#include<iostream>
#include<string>
#include<memory>
using namespace std;

template<typename T>
class SmartPointer
{
	public:
		SmartPointer(T *ptr)
		{
			this->ptr = ptr;
			cout << "constructor called" << endl;
		}
		~SmartPointer()
		{
			delete ptr;
			cout << "destructor called" << endl;
		}
		T& operator*()
		{
			return *ptr;
		}
		
	private:
		T *ptr;
};

int main()
{
	//int SIZE = 4;
	int SIZE;
	cin >> SIZE;
	//int *arr = new int[SIZE]{6,9,22,99};
	//shared_ptr<int[]> p1(arr);
	shared_ptr<int[]> ptr(new int[SIZE]{6, 9, 22, 99}); //, default_delete<int[]>());
	
	for(int i=0; i<SIZE; i++)
	{
		cout << ptr[i] << endl;
	}
	return 0;
}
