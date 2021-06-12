// Date 08-06-2021

#include <stdio.h>

int main()
{
    int marks[5];
    // marks[4] = 10;
    // printf("%d", marks[4]);
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element of Array marks\n", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("Value of %d element of Array marks is %d\n", i, marks[i]);
    }

    // printf("%d", sizeof(marks));

    // printf("%d", marks[:]);

    // marks[0] = 10;
    // printf("Mark 0 is %d!", marks[0]);

    return 0;
}