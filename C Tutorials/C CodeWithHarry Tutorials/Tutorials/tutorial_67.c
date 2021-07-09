// Date 09-07-2021

#include <stdio.h>

int main()
{
    FILE *ptr_1 = NULL;
    ptr_1 = fopen("tutorial_67.txt", "a");

    //! char c = fgetc(ptr_1);
    //! printf("Value of \'c\' = %c\n", c);
    //! c = fgetc(ptr_1);
    //! printf("Value of \'c\' = %c\n", c);

    //! char string[1000];
    //! fgets(string, 1000, ptr_1);
    //! printf("Value of \'string\' = %s\n", string);

    //! fputc('a', ptr_1);
    //! fputc('\n', ptr_1);
    //! fputc('b', ptr_1);
    //! fputc('\n', ptr_1);
    //! fputc('c', ptr_1);
    //! fputc('\n', ptr_1);
    //! fputc('d', ptr_1);
    //! fputc('\n', ptr_1);
    //! fputc('e', ptr_1);
    //! fputc('\n', ptr_1);

    char str[] = "This line is appended using C programe and,\nThe data is = "__DATE__
                 " and time is = "__TIME__
                 ".\n\n";

    fputs(str, ptr_1);

    fclose(ptr_1);
    return 0;
}