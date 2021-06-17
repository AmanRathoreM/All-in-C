// Date 12-06-2021

#include <stdio.h>
#include "tutorial_49_2_2_file_with_external_variable.c"

//* Use of External Variable(from outside of the program)
//* Use of External Variable(from outside of the program)
//* Use of External Variable(from outside of the program)
//* Use of External Variable(from outside of the program)
//* Use of External Variable(from outside of the program)
//* Use of External Variable(from outside of the program)
//* Use of External Variable(from outside of the program)
//* Use of External Variable(from outside of the program)
//* Use of External Variable(from outside of the program)
//* Use of External Variable(from outside of the program)

int sum(int a, int b)
{
    int sum = external_variable_from_outside_of_program + a + b;
    return sum;
}

int main()
{
    //* external_variable_from_outside_of_program is imported from file "tutorial_49_2_2_file_with_external_variable.c"
    //* external_variable_from_outside_of_program is imported from file "tutorial_49_2_2_file_with_external_variable.c"
    //* external_variable_from_outside_of_program is imported from file "tutorial_49_2_2_file_with_external_variable.c"
    //* external_variable_from_outside_of_program is imported from file "tutorial_49_2_2_file_with_external_variable.c"
    //* external_variable_from_outside_of_program is imported from file "tutorial_49_2_2_file_with_external_variable.c"
    //* external_variable_from_outside_of_program is imported from file "tutorial_49_2_2_file_with_external_variable.c"
    //* external_variable_from_outside_of_program is imported from file "tutorial_49_2_2_file_with_external_variable.c"
    //* external_variable_from_outside_of_program is imported from file "tutorial_49_2_2_file_with_external_variable.c"
    //* external_variable_from_outside_of_program is imported from file "tutorial_49_2_2_file_with_external_variable.c"
    //* external_variable_from_outside_of_program is imported from file "tutorial_49_2_2_file_with_external_variable.c"
    external_variable_from_outside_of_program = sum(3, 2);
    printf("Value of \'external_variable_from_outside_of_program\' = %d\n", external_variable_from_outside_of_program);
    return 0;
}