#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	const int ROW = 3;
	const int COL = 4;
	int arr[ROW][COL]{};
	bool alreadyThere;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; )
		{
			alreadyThere = false;
			int newRandomValue = rand() % 13;
			for (int m = 0; m < ROW; m++)
			{
				for (int k = 0; k < COL; k++)
				{
					if (arr[m][k] == newRandomValue)
					{
						alreadyThere = true;
						break;
					}
				}
				if (alreadyThere)
				{
					break;
				}
			}
			if (!alreadyThere)
			{
				arr[i][j] = newRandomValue;
				j++;
			}
		}
	}
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}
