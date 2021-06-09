// Date 06-06-2021

#include <stdio.h>

int main()
{
    char tutorial_9_2_8[100];
    printf("To take input as string use %%s and in front of 2nd argunment add \'&\' (do not enter more then 100 characters because array is created of 100 chars only and don\'t include spaced in between)\n");
    scanf("%s", &tutorial_9_2_8);
    printf("You entered \'%s\'\n", tutorial_9_2_8);
    return 0;
}