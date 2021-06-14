// Date 09-06-2021

//* Take input from the user and ask user to choose 1 for triangular star pattern and 2 for reversed triangular star pattern
//* Then print the pattern accordingly

//* Triangular star pattern
//* *
//* **
//* ***
//* ****
//* *****

//* Reversed triangular star pattern
//* *****
//* ****
//* ***
//* **
//* *

//* Note: Also ask user that how many line he/she need to print

#include <stdio.h>

int main()
{
    int type, how_many_lines;
    char symbol = '*';

    while (1)
    {
        // printf("Now tell which symbol you need in your pattern\n");
        // scanf("%c", &symbol);

        printf("What you need to print i.e. Triangular star pattern or Reversed triangular star pattern!\nEnter 1 for Triangular star pattern\nEnter 2 for Reversed triangular star pattern\n");
        scanf("%d", &type);

        if (type != 1 && type != 2)
        {
            printf("\n\n\nPlease chose a valid option i.e. \'1\' or \'2\'\n");
            continue;
        }

        printf("Now tell how many lines you need to print of Star pattern\n");
        scanf("%d", &how_many_lines);

        // printf("%c", symbol);

        switch (type)
        {
        case 1:
            for (int i = 1; i <= how_many_lines; i++)
            {
                for (int j = 0; j != i; j++)
                {
                    printf("%c", symbol);
                }
                printf("\n");
            }
            break;
        default:

            //* For case 2 i.e. when type == 2
            //* For case 2 i.e. when type == 2

            for (int i = how_many_lines; i != 0; i--)
            {
                for (int j = i; j != 0; j--)
                {
                    printf("%c", symbol);
                }
                printf("\n");
            }
            break;
        }

        return 0;
    }
}