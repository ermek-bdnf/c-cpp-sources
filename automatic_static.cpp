//automatic and static durations
#include <iostream>

void incrementAndPrint()
{
    static int s_value = 1; // the s_value variable is a statistical variable
    ++s_value;
    std::cout << s_value << std::endl;
} // the s_value variable is not destroyed here, but becomes unavailable

/*
void incrementAndPrint()
{
    int val = 1; //automatic duration (default)
    ++val;
    std::cout << val << std::endl;
} // the val variable is destroyed here
*/
int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();
}
