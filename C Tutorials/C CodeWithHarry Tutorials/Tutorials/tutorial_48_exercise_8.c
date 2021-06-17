// Date 11-06-2021

//* Dynamic Memory Allocation
//* ABC Pvt Ltd. manages employee records of other companies.
//* Employee Id can be of any length and it can contain any character
//* For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
//* Then, you have to take employee id as an input and display it on screen.
//* Store the employee id in a character array which is allocated dynamically.
//* You have to create only one character array dynamically

//* EXAMPLES:

//* Employee 1:
//* Enter no of characters in your eId
//* 45
//* Dynamically allocate the character array.
//* take input from user

//* Employee 2:
//* Enter no of characters in your eId
//* 4
//* Dynamically allocate the character array.
//* take input from user

//* Employee 3:
//* Enter no of characters in your eId
//* 9
//* Dynamically allocate the character array.
//* take input from user

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int how_big_id_is;
    char *employee;

    for (int i = 1; i <= 3; i++)
    {
        printf("How much big your id is Employee number %d\n", i);
        scanf("%d", &how_big_id_is);
        employee = (char *)malloc((how_big_id_is + 1) * sizeof(char));
        printf("Please enter your employee id Employee number %d\n", i);
        scanf("%s", employee);
        printf("Employee number %d your id is %s\n", i, employee);
        free(employee);
    }

    return 0;
}