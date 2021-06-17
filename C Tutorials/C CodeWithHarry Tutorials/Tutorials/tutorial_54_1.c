// Date 13-06-2021

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //* Case 1: De allocation of a memory block
    int *pointer = (int *)malloc(7 * sizeof(int));
    pointer[0] = 34;
    pointer[1] = 36;
    pointer[2] = 64;
    pointer[3] = 5;
    for (int i = 0; i <= 3; i++)
        printf("Value of \'pointer[%d]\' = %d\n", i, pointer[i]);

    printf("\nNow after converting pointer as a dangling pointer\n");
    free(pointer); //* pointer is now a dangling pointer

    for (int i = 0; i <= 3; i++)
        printf("Value of dangeling \'pointer[%d]\' = %d\n", i, pointer[i]);

    printf("\nNow after converting pointer as a dangling pointer");
    return 0;
}