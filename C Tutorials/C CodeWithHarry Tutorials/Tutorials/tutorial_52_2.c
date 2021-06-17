// Date 12-06-2021

#include <stdio.h>

int main()
{
    int a = 345;
    float b = 8.3;
    void *pointer;
    pointer = &b;
    printf("The value of b is %f\n", *((float *)pointer));
    printf("The address of b is %d\n", (float *)pointer);
    pointer = &a;
    printf("The value of a is %d\n", *((int *)pointer));
    printf("The address of a is %d\n", (int *)pointer);

    return 0;
}