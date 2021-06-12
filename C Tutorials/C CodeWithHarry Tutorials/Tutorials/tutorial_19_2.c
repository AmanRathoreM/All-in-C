// Date 08-06-2021

#include <stdio.h>

int sum();

int main()
{
    printf("Sum function return value is %d", sum(7, 3));

    return 0;
}
int sum(int a, int b)
{
    return a + b;
}
