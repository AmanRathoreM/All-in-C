// Date 10-06-2021

#include <stdio.h>

int main()
{
    // int typedef;

    typedef unsigned long long ul;

    ul var_1 = 10;
    int var_2 = 10;
    printf("\'sizeof(unsigned long long)\' = %d\n", sizeof(unsigned long long));
    printf("\'sizeof(ul)\' = %d\n", sizeof(ul));
    printf("\'sizeof(var_1)\' = %d\n", sizeof(var_1));
    printf("\'sizeof(var_2)\' = %d\n", sizeof(var_2));
    return 0;
}