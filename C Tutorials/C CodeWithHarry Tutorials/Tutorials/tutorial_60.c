// Date 08-07-2021

#include <stdio.h>

int main()
{
    printf("Value of \'__FILE__\' = %s\n", __FILE__);
    printf("Value of \'__LINE__\' = %d\n", __LINE__);
    printf("Value of \'__DATE__\' = %s\n", __DATE__);
    printf("Value of \'__TIME__\' = %s\n", __TIME__);
    printf("Value of \'__STDC__\' = %d\n", __STDC__);
    printf("Now Value of \'__LINE__\' = %d\n", __LINE__);

    return 0;
}