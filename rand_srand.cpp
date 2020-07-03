#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	const int SIZE = 6;
	int arr[SIZE];
	bool alreadyThere;
	
	for(int i; i<SIZE; ) //i++
	{
		alreadyThere = false;
		int newRandomValue = rand() % 20;
		for(int j=0; j<i; j++)
		{
			if(arr[j] == newRandomValue)
			{
				alreadyThere = true;
				break;
			}
		}
		if(!alreadyThere)
		{
			arr[i] = newRandomValue;
			i++; //for(int i; i<SIZE; )
		}
	}
	for(int i; i<SIZE; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
