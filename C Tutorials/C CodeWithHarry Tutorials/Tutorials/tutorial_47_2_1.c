// Date 11-06-2021

#include <stdio.h>
#include <stdlib.h>

//* Use of calloc
//* Use of calloc
//* Use of calloc
//* Use of calloc
//* Use of calloc
//* Use of calloc
//* Use of calloc
//* Use of calloc
//* Use of calloc
//* Use of calloc

int main()
{
    int *pointer;

    int how_big_memory_you_need;

    printf("In how much big integer array you need to enter values\n");
    scanf("%d", &how_big_memory_you_need);

    pointer = (int *)calloc(how_big_memory_you_need, sizeof(int));
    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Enter the value of element number %d of your array\n", i);
        scanf("%d", &pointer[i]);
    }
    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Garbage value of element number %d of array is %d\n", i, pointer[i]);
    }

    return 0;
}