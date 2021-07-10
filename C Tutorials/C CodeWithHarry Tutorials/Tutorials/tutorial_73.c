// Date 10-07-2021

#include <stdio.h>

int sum(int a, int b) { return a + b; }

void print_hello_and_execute(int (*function_pointer)(int, int))
{
    printf("Hello\n");
    printf("Value of \'5 + 7\' = %d\n", function_pointer(5, 7));
}

void print_good_morning_and_execute(int (*function_pointer)(int, int))
{
    printf("Good Morning\n");

    printf("Value of \'5 + 7\' = %d\n", function_pointer(5, 7));
}

int main()
{
    int (*function_pointer)(int, int);
    function_pointer = sum;
    print_good_morning_and_execute(sum);
    return 0;
}