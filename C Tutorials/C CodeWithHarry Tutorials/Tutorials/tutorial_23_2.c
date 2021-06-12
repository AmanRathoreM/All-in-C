// Date 08-06-2021

#include <stdio.h>

int main()
{
    int marks[2][5] = {{233452, 609, 6554354, 526, 334421},
                       {41435453, 62, 453452, 23, 1144335631}};

    // printf("%d", marks[0][2]);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%20.d", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}