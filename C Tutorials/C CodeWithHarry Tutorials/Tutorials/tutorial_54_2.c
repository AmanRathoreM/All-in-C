// Date 13-06-2021

#include <stdio.h>

int *function_for_dangling()
{
    int a, b, sum;
    a = 785;
    b = 17;
    sum = a + b;
    return &sum;
}

int main()
{
    //* Case 2: Function returning local variable address

    int *dangeling_pointer = function_for_dangling(); //* dangeling_pointer is now a dangling pointer

    printf("Value of \'dangeling_pointer\' = %d\n", dangeling_pointer);

    return 0;
}