//22. for_each algorithm

#include<iostream>
#include<algorithm>
using namespace std;

/*
void Funk(int a)
{
	cout << a << endl;
}
*/

int main()
{
	int arr[] = { 1,2,10,55 };
	for_each(begin(arr), end(arr), [](int a) //passing by reference
	{
		cout << a << endl;
	});
		
	//on each for_each element
	//calls the Funk function
	//selects all the elements in the array
	
	/*
	for(auto a : arr)
	{
		Funk(a);
	}
	*/
	
	/*
	for each(object var in collection_to_loop)
	{
		
	}
	//not recommended for use
	*/
	return 0;
}
