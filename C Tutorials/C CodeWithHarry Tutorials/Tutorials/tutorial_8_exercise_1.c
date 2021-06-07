// Date 06-06-2021

//* Print multiplication table of a number entered by the user in pretty form

//* Example:

//* Input
//* Enter the number you want multiplication table of:
//* 6

//* Output:
//* Table of 6:
//* 6 X 1 = 6
//* 6 X 2 = 12
//* .
//* .
//* .
//* 6 X 10 = 60

#include <stdio.h>

int main()
{
    int number_of_table_you_need_to_print;
    printf("Please enter a number of which you need to print Multiplication table!\n");
    scanf("%d", &number_of_table_you_need_to_print);
    int how_long_you_need_to_print_table;
    printf("Please enter how long you need to print Multiplication table of %d!\n", number_of_table_you_need_to_print);
    scanf("%d", &how_long_you_need_to_print_table);

    for (int i = 1; i <= how_long_you_need_to_print_table; i++)
    {
        printf("%d X %d = %d\n", number_of_table_you_need_to_print, i, number_of_table_you_need_to_print * i);
    }

    return 0;
}