// Date 10-06-2021

//* Quiz
//* allow user to enter two strings and then concatenate them by saying that
//* str1 is a friend of str2

#include <stdio.h>
#include <string.h>

int main()
{
    char str_1[100];
    char str_2[100];
    char str_3[] = " is a friend of ";

    printf("Enter value of string 1\n");
    gets(str_1);

    printf("Enter value of string 2\n");
    gets(str_2);

    printf("\n\n");
    puts(strcat(str_1, strcat(str_3, str_2)));

    return 0;
}