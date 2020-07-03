//131. auto_ptr _ unique_ptr _ shared_ptr _ smart pointers
#include<iostream>
#include<string>
#include<memory> //contains classes of smart pointers
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
	shared_ptr<int> p1(new int(666));
	shared_ptr<int> p2(p1);
	cout << *p1 << endl;
	cout << *p2 << endl;
		
	/*
	unique_ptr<int> up1(new int(666));
	unique_ptr<int> up2;
	
	//и up1.release()
	
	int *p = up1.get();
		
	//up2.swap(up1);
	
	
	//up2 = move(up1);
	/*
	
	/*
	auto_ptr<int> up1(new int(666));
	auto_ptr<int> up2(up1);
	*/
	
	/*
	auto_ptr<int> ap1(new int(666));
		
	auto_ptr<int> ap2(ap1);
	SmartPointer<int> sp1 = new int(666);
	
	SmartPointer<int> sp2 = sp1; //sp2 ссылается на sp1
	*/
	
	//*pointer = 666666;
	//cout << *pointer << endl;
	
	/*
	int *ptr = new int(666);
	cout << ptr << endl;
	cout << *ptr << endl;
	delete ptr;
	*/
	return 0;
}
