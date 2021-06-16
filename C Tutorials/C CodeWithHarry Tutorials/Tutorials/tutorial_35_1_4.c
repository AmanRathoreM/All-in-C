// Date 10-06-2021

#include <stdio.h>
#include <string.h>

int main()
{
    char str_1[] = "Aman1";
    char str_2[] = "Aman2";
    char str_3[100];

    printf("Value of \'str_1\' is ");
    puts(str_1);

    printf("Value of \'str_2\' is ");
    puts(str_2);

    printf("Value of \'str_3\' is ");
    strcpy(str_3, strcat(str_1, str_2));
    puts(str_3);

    return 0;
}