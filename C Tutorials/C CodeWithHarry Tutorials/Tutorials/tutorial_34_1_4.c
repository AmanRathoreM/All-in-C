// Date 10-06-2021

#include <stdio.h>

void print_string(char string[])
{
    int i = 0;
    while (string[i] != '\0')
    {
        printf("%c", string[i++]);
    }
    printf("\nThis string (array) has length of %d\n", i);
}

int main()
{
    char str[5] = "Aman";

    printf("String will print by using custom function\n");
    print_string(str);

    printf("\n\nNow string will print by using an studio function \'puts()\'\n");
    puts(str);

    // printf("");
    return 0;
}
