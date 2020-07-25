//13.1 functor
#include<iostream>
using namespace std;

class MyFunctor
{
	public:
		void operator()() //redefining the () operator
		{
			cout << "Functor " << count << endl;
			count++;
		}
		/* //Funk analog
		void Funk()
		{
			cout << "Functor" << endl;
		}
		*/
	private:
		int count = 0;
};

int main()
{
	MyFunctor f; //f - object of the MyFunctor class
	f();
	f();
	f();
	return 0;
}
