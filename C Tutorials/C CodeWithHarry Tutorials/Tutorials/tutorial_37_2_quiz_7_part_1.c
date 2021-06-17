// Date 10-06-2021

//* Quiz
//* Print all the information of structure provided in "tutorial_37_1.c"

#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    float average_time_code_per_day_in_hours;
    char favorite_character;
    char full_name[50];
};

int main()
{
    struct employee rohan, suresh, ramesh;

    suresh.id = 2;
    ramesh.id = 3;
    rohan.id = 1;

    suresh.average_time_code_per_day_in_hours = 7.19;
    ramesh.average_time_code_per_day_in_hours = 4.12;
    rohan.average_time_code_per_day_in_hours = 13.78;

    suresh.favorite_character = 's';
    ramesh.favorite_character = 'r';
    rohan.favorite_character = 'r';

    strcpy(suresh.full_name, "Suresh Singh");
    strcpy(ramesh.full_name, "Ramesh Khan");
    strcpy(rohan.full_name, "Rohan Das");

    printf("Employee with Employee id %d full name is %s and he likes to code %f hours a day(on an average); by the way his favorite character is %c\n", rohan.id, rohan.full_name, rohan.average_time_code_per_day_in_hours, rohan.favorite_character);

    printf("Employee with Employee id %d full name is %s and he likes to code %f hours a day(on an average); by the way his favorite character is %c\n", ramesh.id, ramesh.full_name, ramesh.average_time_code_per_day_in_hours, ramesh.favorite_character);

    printf("Employee with Employee id %d full name is %s and he likes to code %f hours a day(on an average); by the way his favorite character is %c\n", suresh.id, suresh.full_name, suresh.average_time_code_per_day_in_hours, suresh.favorite_character);

    return 0;
}
