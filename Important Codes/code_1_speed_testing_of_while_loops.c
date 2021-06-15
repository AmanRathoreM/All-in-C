// Date 13-06-2021

#include <stdio.h>
#include <time.h>

int main()
{
    clock_t begin = clock();
    int num_1 = 8989;
    int num_2;
    int i = 1;
    do
    {
        num_2 = num_1 * i++;
    } while (i <= 1000000000);

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("time in taken by while loop is is %lf in seconds\n", time_spent);

    return 0;
}