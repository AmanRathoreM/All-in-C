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
    //* The below two lines are not a valid syntax to declare a string becaue there is no space left for compiler to add NULL character i.e. \0 in the end of the string (array)
    //! char str[4] = "Aman";
    //! print_string(str);
    //* The above two lines are not a valid syntax to declare a string becaue there is no space left for compiler to add NULL character i.e. \0 in the end of the string (array)

    //* The below two lines are a good practice to declare a string because there is 1 space left for compiler to add NULL character i.e. \0 in the end of the string (array)
    char str[5] = "Aman";
    print_string(str);
    //* The above two lines are a good practice to declare a string because there is 1 space left for compiler to add NULL character i.e. \0 in the end of the string (array)

    //* The below two lines are also bad practice to declare a string because there is 1 extra space left in array after adding NULL character i.e. \0; which is wastage of storage
    //! char str[6] = "Aman";
    //! print_string(str);
    //* The above two lines are also bad practice to declare a string because there is 1 extra space left in array after adding NULL character i.e. \0; which is wastage of storage

    // printf("");
    return 0;
}
