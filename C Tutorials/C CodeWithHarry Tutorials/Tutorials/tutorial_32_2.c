// Date 09-06-2021

#include <stdio.h>

void array_value_doubler(int *array)
{
    // printf("%d\n", array);
    // printf("%d\n", array + 1);
    // int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        *(array + i) += *(array + i);
    }
    // return (float)sum / 10;
}

void print_aray(int array[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("Value of array on index %d is %d\n", i, array[i]);
    }
}

int main()
{
    int array_1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    print_aray(array_1);
    array_value_doubler(array_1);
    printf("\n\nNow changed doubled values are\n");
    print_aray(array_1);
    // printf("%d", array_1[1]);

    return 0;
}