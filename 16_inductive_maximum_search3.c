//inductive maximum search 3
#include<stdio.h>
#include<stdbool.h>
#include<iso646.h> //any, all

int main(int argc, char* argv[])
{
	int x;
	int m = -2>>31; //-2^31 = -2147483648
	scanf("%d", &x);
	
	while(x != 0)
	{
		if(x%2 == 0)
			m = x > m ? x : m;
		scanf("%d", &x);		
	}
	printf("maximum = %d\n", m);
	return 0;
}
