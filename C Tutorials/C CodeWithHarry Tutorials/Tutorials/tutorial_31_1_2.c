// Date 09-06-2021

#include <stdio.h>

void swap_value_with_call_by_reference(int *a_address, int *b_address)
{

    //! int temporary_variable = *a_address;
    //! *a_address = *b_address;
    //! *b_address = temporary_variable;

    *a_address += *b_address;
    *b_address = *a_address - *b_address;
    *a_address -= *b_address;
}

int main()
{
    int a = 10, b = 20;
    printf("Value of \'a\' before function call is %d\n", a);
    printf("Value of \'b\' before function call is %d\n\n\n", b);

    swap_value_with_call_by_reference(&a, &b);

    printf("Value of \'a\' after function call is %d\n", a);
    printf("Value of \'b\' after function call is %d\n", b);

    // printf("Value of \'a\' before function call is %d\n", a);
    return 0;
}