//assert
#include<iostream>
#include<cassert>
using namespace std;
void print(int* val)
{
	assert(val != NULL);
	cout << "address of the value in memory: " << val << endl;
}
 
int main()
{
	int z = 666;
	int *p1 = &z;
	int *p2 = NULL;
	print(p1);
	print(p2);
	return 0;
}
