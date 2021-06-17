// Date 12-06-2021

//* Use of Rergister Variable
//* Use of Rergister Variable
//* Use of Rergister Variable
//* Use of Rergister Variable
//* Use of Rergister Variable
//* Use of Rergister Variable
//* Use of Rergister Variable
//* Use of Rergister Variable
//* Use of Rergister Variable
//* Use of Rergister Variable

#include <stdio.h>

int main()
{
    register int register_variable = 1;
    for (int i = 1; i <= 100; i++)
    {
        printf("Value of \'register_variable\' is = %3.d\n", register_variable++);
    }

    return 0;
}