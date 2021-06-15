// Date 14-06-2021

#include <stdio.h>
#include <time.h>

int main()
{

    int num_1 = 8989;
    int num_2;
    clock_t begin = clock();
    for (int i = 1; i <= 1000000000; i++)
    {
        num_2 = num_1 * i;
    }

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("time in taken by for loop is is %lf in seconds\n", time_spent);

    return 0;
}
