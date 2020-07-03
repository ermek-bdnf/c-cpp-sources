//130. smart pointers
#include<iostream>
#include<string>
using namespace std;

template<typename T>
class SmartPointer
{
	public:
		SmartPointer(T *ptr) //pointer to some object (memory).
		{
			this->ptr = ptr;
			cout << "constructor called" << endl;
		}
		~SmartPointer()
		{
			delete ptr; //frees up dynamic memory.
			cout << "destructor called" << endl;
		}
		T& operator*() //overload of pointer(*)
		{
			return *ptr;
		}
		
	private:
		T *ptr;
};

int main()
{
	SmartPointer<int> pointer = new int(666);
	//memory is released when an object is destroyed in the destructor.
	
	//the same dynamic memory area, only with new data.
	*pointer = 666666;
	cout << *pointer << endl;
	/*
	int *ptr = new int(666); //the variable is already in the heap
	cout << ptr << endl; //address in memory where 666 is located
	cout << *ptr << endl; //dereferencing the pointer (value 666)
	delete ptr; //frees up dynamic memory.
	*/
	return 0;
}
