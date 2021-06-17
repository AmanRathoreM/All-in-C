// Date 10-06-2021

#include <stdio.h>
#include <string.h>

union student
{
    int marks, id;
    char favorite_character;
    char full_name[20];
};

int main()
{
    union student rohit;
    rohit.marks = 86;
    rohit.id = 4568;
    rohit.favorite_character = '#';
    strcpy(rohit.full_name, "Rohit Saxena");

    union student shobit;
    shobit.marks = 74;
    shobit.id = 8472;
    shobit.favorite_character = '@';
    strcpy(shobit.full_name, "Shobit Agrawal");

    printf("Value of \'shobit.marks\' = %d\n", shobit.marks);
    printf("Value of \'shobit.id\' = %d\n", shobit.id);
    printf("Value of \'shobit.favorite_character\' = %c\n", shobit.favorite_character);
    printf("Value of \'shobit.full_name\' = %s\n", shobit.full_name);

    printf("\n\n");

    printf("Value of \'rohit.marks\' = %d\n", rohit.marks);
    printf("Value of \'rohit.id\' = %d\n", rohit.id);
    printf("Value of \'rohit.favorite_character\' = %c\n", rohit.favorite_character);
    printf("Value of \'rohit.full_name\' = %s\n", rohit.full_name);

    printf("\nValue of \'sizeof(rohit)\' not marks(4)+id(4)+favorite_character(4)+full_name(20) i.e. 32 = %d\n", sizeof(rohit));
    printf("Value of \'sizeof(shobit)\' not marks(4)+id(4)+favorite_character(4)+full_name(20) i.e. 32 = %d\n", sizeof(shobit));

    printf("\n\nNote: In union only one data is stored ata time rest values are garbage values\n\n\n\n");

    return 0;
}