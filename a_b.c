#include<stdio.h>

int main()
{
	int a = 666;
	int b = 666666;
	printf("before\ta = %d" "\t\tb = %d", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\nafter\ta = %d" "\tb = %d", a, b);
	
	return 0;
}
