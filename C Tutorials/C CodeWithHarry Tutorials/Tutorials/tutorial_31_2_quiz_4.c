// Date 09-06-2021

//* Quiz:
//* Given two numbers a and b, add them then subtract them and assign them to a and b using call by reference.

//* a = 4
//* b = 3

//* after running the function, the values of a and b should be:
//* a = 7 (a + b)
//* b = 1 (a - b)

void add_and_subtract(int *a, int *b)
{
    //* Let a = 4
    //* Let b = 3
    *a += *b;          //* 4 + 3 = 7 ; a = 7
    *b = *a - *b - *b; //* (7 - 3) - 3; b = 1 ; (7 - 3) = a
}

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the value of \'a\'!\n");
    scanf("%d", &a);
    printf("Enter the value of \'b\'!\n");
    scanf("%d", &b);

    add_and_subtract(&a, &b);

    printf("Value of \'a\' after function call is %d\n", a);
    printf("Value of \'b\' after function call is %d\n", b);

    return 0;
}