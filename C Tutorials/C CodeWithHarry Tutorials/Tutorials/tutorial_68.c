// Date 09-07-2021

#include <stdio.h>

int main(int argc, char const *argv[])
{
    //! printf("Value of \'argc\' = %d\n", argc);

    if (argc != 0)
    {
        for (int i = 0; i < argc; i++)
        {
            printf("Value of \'argv[%d]\' = %s\n", i, argv[i]);
        }
    }

    return 0;
}
