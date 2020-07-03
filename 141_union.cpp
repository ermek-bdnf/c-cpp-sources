//141. union
#include<iostream>
using namespace std;

union TheUnion //similar to the structure
{
	short int a;
	int b;
	float c;
};

int main()
{
	TheUnion u;
	u.a = 4;
	u.b = 666;
	u.c = 44.2222;
	
	return 0;
}
