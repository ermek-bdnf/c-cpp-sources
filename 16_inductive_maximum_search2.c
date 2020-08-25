//inductive maximum search 2
#include<stdio.h>
#include<stdbool.h>
#include<iso646.h> //any, all

int main(int argc, char* argv[])
{
	int x;
	scanf("%d", &x);
	int m = x;
	while(x != 777)
	{
		m = x > m ? x : m;
		scanf("%d", &x);		
	}
	printf("maximum = %d\n", m);
	
	return 0;
}
