//malloc2d
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *a;
	int n, m;
	printf("Enter the number of rows: ");
	scanf("%d", &n);
	printf("Enter the number of columns: ");
	scanf("%d", &m);
	a = (int*)malloc(n*m * sizeof(int));
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			//printf("a[%d][%d] = ", i, j);
			//scanf("%d", (a + i*m + j));
			*(a + i*m + j) = rand() % 100;
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			printf("%6d ", *(a + i*m + j));
		}
		printf("\n");
	}
	free(a);
	//getchar(); getchar();
	return 0;
}
