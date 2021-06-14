// Date 09-06-2021

#include <stdio.h>

float array_average_finder(int array[])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += array[i];
    }
    return (float)sum / 10;
}

int main()
{
    int array_1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("Average of \'array_1\' is %f", array_average_finder(array_1));

    return 0;
}