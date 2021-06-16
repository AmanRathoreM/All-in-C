// Date 10-06-2021

#include <stdio.h>
#include <string.h>

int main()
{
    char str_1[] = "Aman1";
    char str_2[] = "Aman2";

    printf("The reverse string of \'str_1\' is ");
    puts(strrev(str_1));

    printf("The reverse string of \'str_1 and str_2\' is ");
    puts(strrev(strcat(str_1, str_2)));
    printf("It is \'2namAAman1\' not \'2namA1namA\' because \'str_1\' has already been reversed!");

    return 0;
}