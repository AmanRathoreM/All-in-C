// Date 12-06-2021

//* Use of External Variable(from program)
//* Use of External Variable(from program)
//* Use of External Variable(from program)
//* Use of External Variable(from program)
//* Use of External Variable(from program)
//* Use of External Variable(from program)
//* Use of External Variable(from program)
//* Use of External Variable(from program)
//* Use of External Variable(from program)
//* Use of External Variable(from program)

int external_variable_from_program = 5;

int sum(int a, int b)
{
    int sum = external_variable_from_program + a + b;
    return sum;
}

#include <stdio.h>

int main()
{
    external_variable_from_program = sum(3, 2);
    printf("Value of \'external_variable_from_program\' = %d\n", external_variable_from_program);
    return 0;
}