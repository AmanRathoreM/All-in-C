// Date 11-06-2021

#include <stdio.h>
#include <stdlib.h>

//* Use of malloc
//* Use of malloc
//* Use of malloc
//* Use of malloc
//* Use of malloc
//* Use of malloc
//* Use of malloc
//* Use of malloc
//* Use of malloc
//* Use of malloc

int main()
{
    int *pointer;

    int how_big_memory_you_need;

    printf("In how much big integer array you need to enter values\n");
    scanf("%d", &how_big_memory_you_need);

    pointer = (int *)malloc(how_big_memory_you_need * sizeof(int));

    // printf("%d", pointer);

    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Enter the value of element number %d of your array\n", i);
        scanf("%d", &pointer[i]);
    }

    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Value of element number %d of your array is %d\n", i, pointer[i]);
    }

    return 0;
}