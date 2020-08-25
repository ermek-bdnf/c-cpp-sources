//inductive maximum search
#include<stdio.h>
#include<stdbool.h>
#include<iso646.h> //any, all

int main(int argc, char* argv[])
{
	int m = 0;
	while(true)
	{
		int x;
		scanf("%d", &x);
		if(x == 0) break; // 0 is terminator
		m = x > m ? x : m;		
	}
	printf("maximum = %d\n", m);
	
	return 0;
}
