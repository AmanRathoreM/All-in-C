// Date 08-06-2021

#include <stdio.h>

int main()
{
    int age;
    // printf("Hello Aman!");
    for (int i = 0; i < 10; i++)
    {
        printf("What is your age!\n");
        scanf("%d", &age);
        if (age > 60)
        {
            printf("Your age is %d which is too big!", age);
            break;
        }
    }
    return 0;
}