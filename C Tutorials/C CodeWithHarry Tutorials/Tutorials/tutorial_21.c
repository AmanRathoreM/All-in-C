// Date 08-06-2021

#include <stdio.h>

int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

int main()
{
    int num;
    printf("Enter a number to know it's Factorial\n");
    scanf("%d", &num);

    printf("Factorial of %d is %d", num, factorial(num));

    return 0;
}