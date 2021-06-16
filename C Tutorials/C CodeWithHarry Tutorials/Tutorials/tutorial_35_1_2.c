// Date 10-06-2021

#include <stdio.h>
#include <string.h>

int main()
{
    char str_1[] = "Aman";
    char str_2[] = "Aman";

    printf("Lengths of \'str_1\' is %d\n", strlen(str_1));
    printf("Lengths of \'str_2\' is %d\n", strlen(str_2));
    printf("Lengths of \'strcat(str_1, str_2)\' is %d\n", strlen(strcat(str_1, str_2)));

    // puts(strcat(str_1, str_2));

    return 0;
}