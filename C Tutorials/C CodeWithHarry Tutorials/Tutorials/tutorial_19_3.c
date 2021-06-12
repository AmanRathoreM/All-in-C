// Date 08-06-2021

#include <stdio.h>
int take_number();

int main()
{
    printf("Enter the number\n");
    int number = take_number();
    printf("Your entered number is %d ", number);

    return 0;
}

int take_number(void)
{
    int number;
    scanf("%d", &number);
    return number;
}