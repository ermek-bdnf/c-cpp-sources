#include<stdio.h>

int main(int argc, char* argv[])
{
	int x;
	scanf("%d", &x);
	
	int p = 1;
	while(x)
	{
		int digit = x % 10;
		p *= digit;
		x /= 10;
	}
	printf("result = %d", p); //factorial
	
	return 0;
}
