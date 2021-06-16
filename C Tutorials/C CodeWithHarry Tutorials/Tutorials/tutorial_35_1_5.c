// Date 10-06-2021

#include <stdio.h>
#include <string.h>

int main()
{
    char str_1[] = "A";
    char str_2[] = "B";

    char str_3[] = "A";
    char str_4[] = "A";

    char str_5[] = "Aman";
    char str_6[] = "Suresh";

    printf("Value of \'strcmp(str_1,str_2)\' is %d\n", strcmp(str_1, str_2));
    printf("Value of \'strcmp(str_2,str_1)\' is %d\n\n", strcmp(str_2, str_1));

    printf("Value of \'strcmp(str_3,str_4)\' is %d\n", strcmp(str_3, str_4));
    printf("Value of \'strcmp(str_4,str_3)\' is %d\n\n", strcmp(str_4, str_3));

    printf("Value of \'strcmp(str_5,str_6)\' is %d\n", strcmp(str_5, str_6));
    printf("Value of \'strcmp(str_6,str_5)\' is %d\n\n\n", strcmp(str_6, str_5));

    printf("Note \'strcmp(str,str)\' will only return \'-1\', \'0\' or \'1\'\n\n");
    // puts(str_1);

    return 0;
}