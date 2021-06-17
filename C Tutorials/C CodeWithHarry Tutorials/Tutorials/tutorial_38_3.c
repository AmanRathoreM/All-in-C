// Date 10-06-2021

#include <stdio.h>

typedef struct employee
{
    int id;
    float average_time_code_per_day_in_hours;
    char favorite_character;
} emp;

int main()
{

    emp rohan, suresh, ramesh;

    suresh.id = 2;
    ramesh.id = 3;
    rohan.id = 1;

    suresh.average_time_code_per_day_in_hours = 7.19;
    ramesh.average_time_code_per_day_in_hours = 4.12;
    rohan.average_time_code_per_day_in_hours = 13.78;

    suresh.favorite_character = 's';
    ramesh.favorite_character = 'r';
    rohan.favorite_character = 'r';

    printf("Employee with Employee id %d likes to code %f hours a day(on an average); by the way his favorite character is %c\n", rohan.id, rohan.average_time_code_per_day_in_hours, rohan.favorite_character);

    printf("Employee with Employee id %d likes to code %f hours a day(on an average); by the way his favorite character is %c\n", ramesh.id, ramesh.average_time_code_per_day_in_hours, ramesh.favorite_character);

    printf("Employee with Employee id %d likes to code %f hours a day(on an average); by the way his favorite character is %c\n", suresh.id, suresh.average_time_code_per_day_in_hours, suresh.favorite_character);

    return 0;
}