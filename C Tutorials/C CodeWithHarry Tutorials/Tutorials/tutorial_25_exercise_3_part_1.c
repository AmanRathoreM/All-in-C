// Date 08-06-2021

//* Write a program to print a fibonacci series (take input from user) using Reccursion and Itertative Function and conclude that which method is taking more time

//* Using Reccursion
//* Using Reccursion
//* Using Reccursion
//* Using Reccursion
//* Using Reccursion
//* Using Reccursion
//* Using Reccursion
//* Using Reccursion
//* Using Reccursion
//* Using Reccursion

#include <stdio.h>

int fibonacci_with_reccursion(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci_with_reccursion(num - 1) + fibonacci_with_reccursion(num - 2);
    }
}

int main()
{
    int num;

    printf("Enter a number to know it's fibonacci\n");
    scanf("%d", &num);
    printf("Fibonacci of number %d is %d!", num, fibonacci_with_reccursion(num));

    return 0;
}