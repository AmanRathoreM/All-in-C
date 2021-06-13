// Date 09-06-2021

#include <stdio.h>

int main()
{
    int a = 10;
    int *pointer_of_a = &a;
    printf("Value of \'a\' is %d\n", a);
    printf("Value of \'pointer_of_a\' is %d\n", pointer_of_a);
    printf("Value of \'pointer_of_a + 1\' is %d\n", pointer_of_a + 1);
    printf("Value of \'*pointer_of_a\' is %d\n", *pointer_of_a);
    pointer_of_a--;
    printf("Value of \'*pointer_of_a\' (After \'pointer_of_a--\') is %d (which is a garbage value)\n", *pointer_of_a);

    return 0;
}