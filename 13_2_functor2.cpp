//13.2 functor2
#include<iostream>
using namespace std;

class MyFunctor
{
	public:
		int operator()(int a, int b) //redefining the () operator
		{
			cout << "Functor" << endl;
			return a + b;
		}
		/* //Funk analog
		void Funk()
		{
			cout << "Functor" << endl;
		}
		*/
	private:
};

class EvenFunctor
{
	public:
		
		void operator()(int value)
		{
			if(value % 2 == 0)
			{
				evenSum += value;
				evenCount++;
			}
		}
		
		void ShowEvenSum()
		{
			cout << "sum of even numbers = " << evenSum << endl;
		}
		
		void ShowEvenCount()
		{
			cout << "number of even numbers = " << evenCount << endl;
		} 
	private:
		int evenSum = 0; //sum of all even numbers
		int evenCount = 0; //to store the number of even numbers
};

int main()
{
	int arr[] = {2,7,9,14};
	EvenFunctor ef;
	for(auto element : arr)
	{
		ef(element);
	}
	ef.ShowEvenSum();
	ef.ShowEvenCount();
	return 0;
}
