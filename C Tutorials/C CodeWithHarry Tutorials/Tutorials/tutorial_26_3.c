// Date 09-06-2021

#include <stdio.h>

int main()
{
    int *null_pointer_with_null_declaration = NULL;

    int *null_pointer_without_null_declaration;

    printf("Value of \'null_pointer_with_null_declaration\' is %p! by using Pointer format specifier \'%%p\'\n", null_pointer_with_null_declaration);
    printf("Value of \'null_pointer_without_null_declaration\' is %p! by using Pointer format specifier \'%%p\'\n", null_pointer_without_null_declaration);

    return 0;
}