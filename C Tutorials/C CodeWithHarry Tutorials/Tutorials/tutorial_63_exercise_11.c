// Date 08-07-2021

//* Check Palindrome In C Language - Exercise 11: C Tutorial In Hindi #63
//* The task you have to perform is to write a program that will check whether the integer number is a palindrome or not. A palindromic number is a number such as 16461, which remains the same when its digits are reversed. The example of palindromic numbers is 101, 131, 151.

int is_palindrome_or_not(int num)
{
    int reversed = 0;
    int original_number = num;

    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }

    if (reversed == original_number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number to check it is a palindrome number or not \n");
    scanf("%d", &num);

    if (is_palindrome_or_not(num))
    {
        printf("%d is a palindrome number", num);
    }
    else
    {
        printf("%d is not a palindrome number", num);
    }

    return 0;
}