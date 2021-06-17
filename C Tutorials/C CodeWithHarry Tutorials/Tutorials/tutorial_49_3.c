// Date 12-06-2021

//* Use of Static Variable
//* Use of Static Variable
//* Use of Static Variable
//* Use of Static Variable
//* Use of Static Variable
//* Use of Static Variable
//* Use of Static Variable
//* Use of Static Variable
//* Use of Static Variable
//* Use of Static Variable

int static_function_sum()
{
    static int sum = 1;
    return sum++;
}

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        printf("Value of \'sum\' by calling \'static_function_sum()\' function %3.d time = %3.d\n", i, static_function_sum());
    }

    return 0;
}