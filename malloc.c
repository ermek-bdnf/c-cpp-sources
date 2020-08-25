//malloc
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *a;
	int i, n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	for(i=0; i<n; i++)
	{
		//printf("a[%d] = ", i);
		//scanf("%d", &a[i]);
		a[i] = rand() % 100;
	}
	for(i=0; i<n; i++)
		printf("%d ", a[i]);
	free(a);
	//getchar(); getchar();
	return 0;
}
