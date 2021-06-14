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
    //* The below two lines are not a valid syntax to declare a string and these two lines are also not a good practice to declare a string in C
    //! char str[] = {'A', 'm', 'a', 'n'};
    //! print_string(str);
    //* The above two lines are not a valid syntax to declare a string and these two lines are also not a good practice to declare a string in C

    //* The below two lines are a good practice to declare a string
    char str[] = {'A', 'm', 'a', 'n', '\0'};
    print_string(str);
    //* The above two lines are a good practice to declare a string

    // printf("");
    return 0;
}
