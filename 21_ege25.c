//ege 25
#include<stdio.h>
#define N 6

int main(int argc, char* argv[])
{
	int a[N];
	int i, j, k;
	
	for(i = 0; i < N; ++i)
		scanf("%d", &a[i]);

	k = 0;
	for(i = 0; i < N; ++i)
		if(a[i] > 100 && a[i]%5 == 0)
		k++;
	
	for(i = 0; i < N; ++i)
	{
		if(a[i] > 100 && a[i]%5 == 0)
			a[i] = k;
		printf("%d\n", a[i]);
	}	
	
	return 0;
}
