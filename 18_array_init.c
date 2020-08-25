//array_init
#include<stdio.h>

#define N 6

int main(int argc, char* argv[])
{
	int A[N] = {0};
	for(int i=0; i<N; ++i)
		//A[i] = N - i - 1;
		A[i] = i%2; //0 1 0 1 0 1
		//A[N - i - 1] = i;
	for(int i=0; i<N; ++i)
		printf(" %d ", A[i]);
	return 0;
}
