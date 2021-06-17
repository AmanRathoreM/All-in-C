// Date 11-06-2021

#include <stdio.h>
#include <stdlib.h>

//* Use of realloc
//* Use of realloc
//* Use of realloc
//* Use of realloc
//* Use of realloc
//* Use of realloc
//* Use of realloc
//* Use of realloc
//* Use of realloc
//* Use of realloc

int main()
{
    int *pointer;

    int how_big_memory_you_need;

    printf("In how much big integer array you need to enter values (using malloc)\n");
    scanf("%d", &how_big_memory_you_need);

    pointer = (int *)malloc(how_big_memory_you_need * sizeof(int));

    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Enter the value of element number %d of your array\n", i);
        scanf("%d", &pointer[i]);
    }

    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Value of element number %d of your array is %d\n", i, pointer[i]);
    }

    printf("\n\nNow how much big integer array you need to re-allocate (using realloc)\n");
    scanf("%d", &how_big_memory_you_need);

    pointer = (int *)realloc(pointer, how_big_memory_you_need * sizeof(int));

    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Enter the value of re-allocated array\'s element number %d of your array\n", i);
        scanf("%d", &pointer[i]);
    }

    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Value of element number %d of your array is %d\n", i, pointer[i]);
    }

    return 0;
}