// Date 08-06-2021

#include <stdio.h>

int main()
{
    int a = 10;
    float b = 21.324432;
    printf("The value of a is %d\nReal Value of b is %f\nThe value of b is %f (Without typecast and with %%d)\nThe value of b is %d (With typecast into int and with %%d)", a, b, b, (int)b);

    return 0;
}