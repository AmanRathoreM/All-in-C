// Date 07-06-2021

#include <stdio.h>

int main()
{
    int index_1 = 1;

    for (; 1; index_1++)
    {
        //* This for loop will be an Infinite loop because second argunment of for loop is 1 which means true in C
        printf("Hello Aman %d!\n", index_1);
        //* This for loop will be an Infinite loop because second argunment of for loop is 1 which means true in C
    }
    return 0;
}