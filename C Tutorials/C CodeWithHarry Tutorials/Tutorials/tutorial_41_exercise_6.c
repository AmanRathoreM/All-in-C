// Date 10-06-2021

#include <stdio.h>
#include <string.h>

void parser(char *str)
{
    short int in_or_not = 4, index = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '<')
        {
            in_or_not = 1;
            continue;
        }
        else if (str[i] == '>')
        {
            in_or_not = 0;
            continue;
        }
        if (in_or_not == 0)
        {
            str[index++] = str[i];
            continue;
        }
    }
    str[index] = '\0';
    while (str[0] == ' ')
    {
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i + 1];
        }
    }

    while (str[strlen(str) - 1] == ' ')
    {
        str[strlen(str) - 1] = '\0';
    }
}

int main()
{
    char string[] = "<h1>             Hi My name is Aman   </h1> ";
    parser(string);

    // puts(string);
    printf("~~%s~~", string);
    return 0;
}