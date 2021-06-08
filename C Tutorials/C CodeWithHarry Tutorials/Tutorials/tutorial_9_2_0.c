// Date 06-06-2021

#include <stdio.h>

int main()
{
    char tutorial_9_2_1 = 'f';
    printf("\nTo print char use %%c \'%c\'\n", tutorial_9_2_1);

    char tutorial_9_2_2[] = "Aman";
    printf("\nTo print string use %%s \'%s\'\n", tutorial_9_2_2);

    int tutorial_9_2_3_1 = 2015, tutorial_9_2_3_2 = 2020;
    printf("\nTo print int use %%d \'%d\'\n", tutorial_9_2_3_1);
    printf("\nTo print int use %%i \'%i\'\n", tutorial_9_2_3_2);

    float tutorial_9_2_4 = 99.999;
    printf("\nTo print float use %%f \'%f\'\n", tutorial_9_2_4);
    printf("\nTo print float use %%e \'%e\'\n", tutorial_9_2_4);

    int tutorial_9_2_5 = 30;
    printf("\nTo print octa Decimal use %%o \'%o\'\n", tutorial_9_2_5);

    int tutorial_9_2_6 = 28;
    printf("\nTo print hexa Decimal use %%x \'%x\'\n", tutorial_9_2_6);

    char tutorial_9_2_7;
    printf("\nTo take input as char use %%c and in front of second argunment add \'&\'\n");
    scanf("%c", &tutorial_9_2_7);
    printf("You entered \'%c\'\n", tutorial_9_2_7);

    char tutorial_9_2_8[100];
    printf("\nTo take input as string use %%s and in front of 2nd argunment add \'&\' (do not enter more then 100 characters because array is created of 100 chars only and don\'t include spaced in between)\n");
    scanf("%s", tutorial_9_2_8);
    printf("You entered \'%s\'\n", tutorial_9_2_8);

    return 0;
}