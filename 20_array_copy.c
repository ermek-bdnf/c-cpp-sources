//array_copy
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
	int B[N] = {0};
	for(int i = 0; i < N; ++i)
		B[i] = A[N - 1 - i];
	
	print_array(A);
	print_array(B);
	
	return 0;
}
