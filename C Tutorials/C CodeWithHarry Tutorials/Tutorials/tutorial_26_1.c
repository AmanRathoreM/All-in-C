// Date 09-06-2021

#include <stdio.h>

int main()
{
    int a = 10;
    int *pointer_of_a = &a;
    printf("Pointers are printed by using \'%%x\' which is a Hexa Decimal Format Specifier\n");
    printf("The value of \'a\' is %d\n", a);
    printf("The value of \'&a\' is %x\n", &a);
    printf("The value of \'pointer_of_a\' is %x\n", pointer_of_a);
    printf("The value of \'*pointer_of_a\' is %x\n", *pointer_of_a);
    printf("The value of \'&pointer_of_a\' is %x\n", &pointer_of_a);
    printf("The size of \'pointer_of_a\' is %d\n", sizeof(pointer_of_a));
    // printf("The size of \'pointer_of_a\' is %d\n", sizeof(int *));
    // printf("The value of Pointer of A is %d\n", &pointer_of_a);
    // printf("");

    return 0;
}