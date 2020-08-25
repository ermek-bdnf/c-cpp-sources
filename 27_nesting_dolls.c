//27_nesting_dolls.c
#include <stdio.h>

void nesting_dolls(int w);

int main(int argc, char* argv[])
{
	int z;
	printf("enter the number of nesting dolls: ");
	scanf("%d", &z);
    nesting_dolls(z);

    return 0;
}

void nesting_dolls(int w)
{
    if (w == 1)
        printf(" Last nesting dolls!!! %d\n", w);
    else
    {
        printf(" Top side of nesting dolls %d\n", w);
        nesting_dolls(w-1);
        printf(" Bottom side of nesting dolls %d\n", w);
    }
}
