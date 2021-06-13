// Date 08-06-2021

//* Write a program to print a fibonacci series (take input from user) using Reccursion and Itertative Function and conclude that which method is taking more time

//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function

#include <stdio.h>

// int fibonacci(int num)
// {
//     if (num == 0)
//     {
//         return 0;
//     }
//     else if (num == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return fibonacci(num - 1) + fibonacci(num - 2);
//     }
// }

int fibonacci_with_iterative(int num)
{
    int seed_a = 0, seed_b = 1;
    if (num == 1)
    {
        return 1;
    }
    else if (num == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < num - 1; i++)
        {
            seed_b += seed_a;
            seed_a = seed_b - seed_a;
        }
        return seed_b;
    }
}

int main()
{
    while (1)
    {
        int num;
        printf("Enter a number to know it's fibonacci\n");
        scanf("%d", &num);
        printf("Fibonacci of number %d is %d!\n", num, fibonacci_with_iterative(num));
    }
    return 0;
}