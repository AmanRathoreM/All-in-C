// Date 09-06-2021

#include <stdio.h>

int swap_value_without_call_by_reference(int a, int b)
{
    int temporary_variable = a;
    b = a;
    a = temporary_variable;
}

int main()
{
    int a = 10, b = 20;
    printf("Value of \'a\' before function call is %d\n", a);
    printf("Value of \'b\' before function call is %d\n", b);

    swap_value_without_call_by_reference(a, b);

    printf("Value of \'a\' after function call is %d\n", a);
    printf("Value of \'b\' after function call is %d\n", b);

    return 0;
}