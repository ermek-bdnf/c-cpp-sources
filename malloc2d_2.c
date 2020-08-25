//malloc2d_2
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int **a;
	int i, j, n, m;
	printf("Enter the number of rows: ");
	scanf("%d", &n);
	printf("Enter the number of columns: ");
	scanf("%d", &m);
	a = (int**)malloc(n * sizeof(int*));
	for(i=0; i<n; i++)
	{
		a[i] = (int*)malloc(m * sizeof(int));
		for(j=0; j<m; j++)
		{
			//printf("a[%d][%d] = ", i, j);
			//scanf("%d", &a[i][j]);
			a[i][j] = rand() % 100;
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("%4d ", a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<n; i++)
		free(a[i]);
	free(a);
	//getchar(); getchar();
	return 0;
}
