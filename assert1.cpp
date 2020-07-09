//assert1
#include<iostream>
#include<cassert>
using namespace std;
int sum(int o, int z)
{
	return o + z;
}

void test()
{
	assert(sum(11, 22) == 33);
	assert(sum(-11, -22) == -33);
	assert(sum(-11, 0) == -11);
	assert(sum(-11, 11) == 0);
	cout << "test is OK" << endl;
}
 
int main()
{
	test();
	return 0;
}
