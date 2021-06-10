// Date 07-06-2021

#include <stdio.h>

int main()
{
    int index_1 = 1;
    printf("Before loop\n");

    for (; 0; index_1++)
    {
        //* This for loop will not because second argunment of for loop is 0 which means False in C
        printf("Hello Aman %d!\n", index_1);
        //* This for loop will not because second argunment of for loop is 0 which means False in C
    }
    printf("After loop");
    return 0;
}