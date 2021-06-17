// Date 12-06-2021

#include <stdio.h>

int main()
{
    void *pointer;
    printf("The value of pointer without type casting is %d\n", pointer);
    printf("The value of pointer with type casting is %d\n", (int *)pointer);
    printf("The value on pointer with type casting is %d\n", *((int *)pointer));
    printf("The value on pointer with type casting is %f\n", *((float *)pointer));
    printf("The value on pointer with type casting is %c\n", *((char *)pointer));
    return 0;
}