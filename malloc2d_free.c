//malloc2d_free
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int **a;
	int i, j, n, *m;
	printf("Enter the number of rows: ");
	scanf("%d", &n);
	a = (int**)malloc(n * sizeof(int*));
	m = (int*)malloc(n * sizeof(int));
	for(i=0; i<n; i++)
	{
		printf("Enter the number of columns in the row: ");
		scanf("%d", &m[i]);
		a[i] = (int*)malloc(m[i] * sizeof(int));
		//a[i] = rand() % 100;
		for(j=0; j<m[i]; j++)
		{
			//printf("a[%d][%d] = ", i, j);
			//scanf("%d", &a[i][j]);
			a[i][j] = rand() % 100;
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<m[i]; j++)
		{
			printf("%4d ", a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<n; i++)
	{
		free(a[i]);
	}
	free(a);
	free(m);
	//getchar(); getchar();
	return 0;
}
