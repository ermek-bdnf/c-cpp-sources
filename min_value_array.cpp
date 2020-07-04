//min value of the array
#include<iostream>
#include<ctime> //time()
using namespace std;

int main()
{
	srand(time(NULL));
	int const SIZE = 10;
	int arr[SIZE];
	
	bool alrThere;
	for(int i=0; i < SIZE; )
	{
		alrThere = false;
		int newRandVal = rand() % 100;
		for(int j=0; j<i; j++)
		{
			if(arr[j] == newRandVal)
			{
				alrThere = true;
				break;
			}
		}
		if(!alrThere)
		{
			arr[i] = newRandVal;
			i++;
		}
	
	}
	
	for(int i=1; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
	
	int min_value = arr[0];
	
	for(int i=1; i < SIZE; i++)
	{
		if(arr[i] < min_value)
		{
			min_value = arr[i];
		}
	}
	cout << "minimum value in the array: " << min_value << endl;
	
	return 0;
}
