// Date 07-06-2021

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age!\n");
    scanf("%d", &age);

    switch (age)
    {
    case 18:
        printf("Your age is 18 so you can vote!");
        // age--;
        break;
    case 17:
        printf("Your age is 17 so you can vote next year!");
        break;
    case 16:
        printf("You are an teenager with age 17 so you can't vote!");
        break;

    default:
        printf("There is no case with age %d try another age!", age);
        break;
    }
    return 0;
}