// Date 11-06-2021

#include <stdio.h>

int a_static_function()
{
    static int a; //* there is no need to instilize a static variable value because by default it's value is 0
    return a++;
}

int a_non_static_function()
{
    int a = 0;
    return a++;
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("For loop run %2.d times \'a\' = %d\n", i + 1, a_static_function());
    }

    printf("\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("For loop run %2.d times \'a\' = %d\n", i + 1, a_non_static_function());
    }
    // printf("Value of \'a\' = %d\n", a);
    return 0;
}