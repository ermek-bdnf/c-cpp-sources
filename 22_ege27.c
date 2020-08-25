//ege 27
#include<stdio.h>

int main(int argc, char* argv[])
{
	int N;
	scanf("%d", &N); //4
	int A[N];
	for(int i = 0; i < N; i++)
		scanf("%d", &A[i]); //2 6 13 39
	int m = 0;
	for(int i = 0; i < N; ++i)
		for(int k = i+1; k < N; k++)
			if(A[i]*A[k]%26 == 0)
				m++;
	printf("%d", m); //4
	return 0;
}
