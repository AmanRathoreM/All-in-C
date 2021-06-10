// Date 07-06-2021

//* Suppose you need to give a gift to children who has passed in there exams
//* for passing in --
//* maths and science - 45 Rupees gift
//* science - 15 Rupees gift
//* maths - 15 Rupees gift
//* Make a programe which asks user to input which subject they passed in an tell them that how much price gift they are receveing

#include <stdio.h>

int main()
{
    int which_subject_student_passed_in;
    printf("Please tell in which subject you passed i.e.\nEnter 1 if you passed in Maths and Science\nEnter 2 if you passed in Science\nEnter 3 if you passed in Maths\n");
    scanf("%d", &which_subject_student_passed_in);

    if (which_subject_student_passed_in == 1)
    {
        printf("You passed in Maths and Science both so you will get a gift of 45 Rupees");
    }
    else if (which_subject_student_passed_in == 2)
    {
        printf("You passed in Science so you will get a gift of 15 Rupees");
    }
    else if (which_subject_student_passed_in == 3)
    {
        printf("You passed in Maths so you will get a gift of 15 Rupees");
    }
    else
    {
        printf("Please Select a valid option");
    }

    return 0;
}