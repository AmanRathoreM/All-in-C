// Date 07-06-2021

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age!\n");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Your age is %d so you can vote!", age);
    }
    else if (age == 17)
    {
        printf("Your age is %d so you can vote next Year!", age);
    }
    else
    {
        printf("Your age is %d so you can't vote!", age);
    }

    return 0;
}