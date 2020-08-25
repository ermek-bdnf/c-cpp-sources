//array_reverse_cycle2
#include<stdio.h>

#define N 6

void print_array(int A[])
{
	for(int i = 0; i < N; ++i)
		printf("%4d ", A[i]);
	printf("\n");
}

int main(int argc, char* argv[])
{
	int A[N] = {0, 10, 20, 30, 90, 666};
	
	print_array(A);
	
	int tmp = A[N-1];
	for(int i = N-1; i > 0 ; --i)
		A[i] = A[i-1];
	A[0] = tmp;
	print_array(A);
	
	/*
	int tmp = A[0];
	for(int i = 0; i < N-1; ++i)
		A[i] = A[i+1];
	A[N-1] = tmp;
	print_array(A);
	*/
	/*
	for(int i = 0; i < N/2; ++i)
	{
		int tmp = A[i];
		A[i] = A[N - 1 - i];
		A[N - 1 - i] = tmp;
	}
	print_array(A);
	*/
	
	return 0;
}
