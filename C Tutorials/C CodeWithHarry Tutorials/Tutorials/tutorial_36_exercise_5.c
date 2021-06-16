// Date 10-06-2021

#include <stdio.h>

void print_aray();

void array_reverse(int *ary)
{
    int temp;
    for (int i = 0; i < 11 / 2; i++)
    {
        temp = ary[i];
        ary[i] = ary[10 - i];
        ary[10 - i] = temp;
    }
}

int main()
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print_aray(array);

    printf("\n\nThe reversed Array is\n");

    array_reverse(array);

    print_aray(array);

    return 0;
}
void print_aray(int array[])
{
    for (int i = 0; i <= 10; i++)
    {
        printf("Value of array on index %d is %d\n", i, array[i]);
    }
}