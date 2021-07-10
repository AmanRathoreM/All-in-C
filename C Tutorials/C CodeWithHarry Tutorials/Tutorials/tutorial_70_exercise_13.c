// Date 09-07-2021

//* You have to create a command line utility to add/subtract/divide/multiply two numbers
//* First command line argument of your c program must be the operation.
//* The next arguments being the two numbers. For example:
//* >>Command.c add 45 4
//* >>49

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num_1 = atoi(argv[2]);
    int num_2 = atoi(argv[3]);

    if (!(strcmp(argv[1], "add")))
    {
        printf("Operator used is +\n");
        printf("Num 1 = %d\n", num_1);
        printf("Num 2 = %d\n", num_2);
        printf("And the addition is = %d\n", num_1 + num_2);
    }
    else if (!(strcmp(argv[1], "subtract")))
    {
        printf("Operator used is -\n");
        printf("Num 1 = %d\n", num_1);
        printf("Num 2 = %d\n", num_2);
        printf("And the addition is = %d\n", num_1 - num_2);
    }
    else if (!(strcmp(argv[1], "divide")))
    {
        printf("Operator used is /\n");
        printf("Num 1 = %d\n", num_1);
        printf("Num 2 = %d\n", num_2);
        printf("And the addition is = %d\n", num_1 / num_2);
    }
    else if (!(strcmp(argv[1], "multiply")))
    {
        printf("Operator used is *\n");
        printf("Num 1 = %d\n", num_1);
        printf("Num 2 = %d\n", num_2);
        printf("And the addition is = %d\n", num_1 * num_2);
    }
    else
    {
        printf("Not a Valid argument");
    }
    // printf("Value of \'argv[1]\' = '%s'\n", argv[1]);

    /*
    int user_entered_values[] = {3,
                                 4,
                                 2,
                                 1};

    int value_after_addition = 0;

    for (int i = 0; i < sizeof(user_entered_values) / 4; i++)
    {
        value_after_addition += user_entered_values[i];
    }
    printf("Value of \'value_after_addition\' = %d\n", value_after_addition);
    */
    return 0;
}
