// Date 10-06-2021

#include <stdio.h>

int main()
{
    typedef int *intPointer;
    intPointer a, b;
    int c = 89;
    a = &c;
    b = &c;

    return 0;
}