// Date 11-06-2021

#include <stdio.h>
#include <stdlib.h>

//* Use of free
//* Use of free
//* Use of free
//* Use of free
//* Use of free
//* Use of free
//* Use of free
//* Use of free
//* Use of free
//* Use of free

int main()
{
    int *pointer;

    int how_big_memory_you_need;

    printf("In how much big integer array you need to enter values and experiment with (free)\n");
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

    printf("\n\n");
    free(pointer);
    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Now after free() function; value of element number %d of your array is %d (%d is a garbage value because it\'s main value is been freed using free() function)\n", i, pointer[i], pointer[i]);
    }

    return 0;
}