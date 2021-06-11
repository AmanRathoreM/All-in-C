// Date 08-06-2021

#include <stdio.h>

int main()
{

    for (int i = 0; i < 10; i++)
    {
        printf("For for loop 1 i = %d\n", i);
        for (int j = 0; j < 3; j++)
        {
            printf("\tFor for loop 2 j = %d\n", j);
            for (int k = 0; k < 2; k++)
            {
                printf("\t\tFor for loop 3 k = %d\n", k);
                for (int l = 0; l < 1; l++)
                {
                    printf("\t\t\tFor for loop 4 l = %d\n", l);
                    if (i == 4)
                    {
                        goto end_of_loop;
                    }
                }
            }
        }
    }
    //* Now to break these multiple for loops with single statement we use goto
    //* Now to break these multiple for loops with single statement we use goto
    //* Now to break these multiple for loops with single statement we use goto
    //* Now to break these multiple for loops with single statement we use goto
    //* Now to break these multiple for loops with single statement we use goto
    //* Now to break these multiple for loops with single statement we use goto
    //* Now to break these multiple for loops with single statement we use goto
    //* Now to break these multiple for loops with single statement we use goto
    //* Now to break these multiple for loops with single statement we use goto
    //* Now to break these multiple for loops with single statement we use goto
    //* Now to break these multiple for loops with single statement we use goto
    //* Now to break these multiple for loops with single statement we use goto
    //* Now to break these multiple for loops with single statement we use goto
    //* Now to break these multiple for loops with single statement we use goto
    //* Now to break these multiple for loops with single statement we use goto
    //* Now to break these multiple for loops with single statement we use goto
    //* Now to break these multiple for loops with single statement we use goto
    //* Now to break these multiple for loops with single statement we use goto
    //* Now to break these multiple for loops with single statement we use goto
    //* Now to break these multiple for loops with single statement we use goto

end_of_loop:
    printf("This is the end of our loops");
    return 0;
}