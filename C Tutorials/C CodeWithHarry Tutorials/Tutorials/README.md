<h1 style="text-align:center; font-size:360%; font-family:verdana;color:#4A3E76;"><em>C Tutorials</em></h1>
===================================================================================================================================
# These tutorials are watched from [**_codewithharry_**](https://www.youtube.com/channel/UCeVMnSShP_Iviwkknt83cww "Clike here to checkout his channel") YouTube channel from [**_C Tutorial Playlist_**](https://youtube.com/playlist?list=PLu0W_9lII9aiXlHcLx-mDH1Qul38wD3aR "Clike here to check out his C Tutorial Playlist")
---
---
---
---
---
## **_tutorial_3.c_**
### [**_Click me_**](tutorial_3.c "Clike here to see full file") to see full file of tutorial_3.c
```c
// Date 06-06-2021

#include <stdio.h>

int main()
{
    printf("Hello Aman!");

    return 0;
}
```
---
---
## **_tutorial_4.c_**
### [**_Click me_**](tutorial_4.c "Clike here to see full file") to see full file of tutorial_4.c
```c
// Date 06-06-2021

#include <stdio.h>

int main()
{
    //! gcc -Wall -save-temps tutorial_4.c -o tutorial_4
    int a, b;
    printf("Enter value of number A!\n");
    scanf("%d", &a);
    printf("Enter value of number B!\n");
    scanf("%d", &b);
    printf("The sum of %d and %d is %d! ", a, b, a + b);
    return 0;
}
```
---
---
## **_tutorial_5.c_**
### [**_Click me_**](tutorial_5.c "Clike here to see full file") to see full file of tutorial_5.c
```c
// Date 06-06-2021

#include <stdio.h>
int main()
{
    printf(
        "Hello Aman!");
    return 0;
}
```
---
---
## **_tutorial_6.c_**
### [**_Click me_**](tutorial_6.c "Clike here to see full file") to see full file of tutorial_6.c
```c
// Date 06-06-2021

#include <stdio.h>

int main()
{
    int i = 1;
    printf("Below given are the sizes of datatypes in C");
    printf("\n0%d.) Size of \"char\" is %d", i++, sizeof(char));
    printf("\n0%d.) Size of \"signed char\" is %d", i++, sizeof(signed char));
    printf("\n0%d.) Size of \"unsigned char\" is %d", i++, sizeof(unsigned char));
    printf("\n0%d.) Size of \"short\" is %d", i++, sizeof(short));
    printf("\n0%d.) Size of \"signed short\" is %d", i++, sizeof(signed short));
    printf("\n0%d.) Size of \"unsigned short\" is %d", i++, sizeof(unsigned short));
    printf("\n0%d.) Size of \"int\" is %d", i++, sizeof(int));
    printf("\n0%d.) Size of \"signed int\" is %d", i++, sizeof(signed int));
    printf("\n0%d.) Size of \"unsigned int\" is %d", i++, sizeof(unsigned int));
    printf("\n%d.) Size of \"short int\" is %d", i++, sizeof(short int));
    printf("\n%d.) Size of \"signed short int\" is %d", i++, sizeof(signed short int));
    printf("\n%d.) Size of \"unsigned short int\" is %d", i++, sizeof(unsigned short int));
    printf("\n%d.) Size of \"long int\" is %d", i++, sizeof(long int));
    printf("\n%d.) Size of \"signed long int\" is %d", i++, sizeof(signed long int));
    printf("\n%d.) Size of \"unsigned long int\" is %d", i++, sizeof(unsigned long int));
    printf("\n%d.) Size of \"float\" is %d", i++, sizeof(float));
    printf("\n%d.) Size of \"double\" is %d", i++, sizeof(double));
    printf("\n%d.) Size of \"long\" is %d", i++, sizeof(long));
    printf("\n%d.) Size of \"long double\" is %d", i++, sizeof(long double));

    return 0;
}
```
---
---
## **_tutorial_7.c_**
### [**_Click me_**](tutorial_7.c "Clike here to see full file") to see full file of tutorial_7.c
```c
// Date 06-06-2021

#include <stdio.h>

int main()
{
    // float a = 54.36445455;
    // printf("Value of Float A is %i", a);

    int a, b;
    a = 2;
    b = 3;

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("There are many more operators but they are already tought in C++ tutorials");
    //* There are many more operators but they are already tought in C++ tutorials
    // printf("\n%d", 10 << 3);
    // printf("\n%d", 10 << 3);
    // printf("\n%d", 2 != 2 ?: 3);
    return 0;
}
```
---
---
## **_tutorial_8_exercise_1.c_**
### [**_Click me_**](tutorial_8_exercise_1.c "Clike here to see full file") to see full file of tutorial_8_exercise_1.c
```c
// Date 06-06-2021

//* Print multiplication table of a number entered by the user in pretty form

//* Example:

//* Input
//* Enter the number you want multiplication table of:
//* 6

//* Output:
//* Table of 6:
//* 6 X 1 = 6
//* 6 X 2 = 12
//* .
//* .
//* .
//* 6 X 10 = 60

#include <stdio.h>

int main()
{
    int number_of_table_you_need_to_print;
    printf("Please enter a number of which you need to print Multiplication table!\n");
    scanf("%d", &number_of_table_you_need_to_print);
    int how_long_you_need_to_print_table;
    printf("Please enter how long you need to print Multiplication table of %d!\n", number_of_table_you_need_to_print);
    scanf("%d", &how_long_you_need_to_print_table);

    for (int i = 1; i <= how_long_you_need_to_print_table; i++)
    {
        printf("%d X %d = %d\n", number_of_table_you_need_to_print, i, number_of_table_you_need_to_print * i);
    }

    return 0;
}
```
---
---
## **_tutorial_9_1.c_**
### [**_Click me_**](tutorial_9_1.c "Clike here to see full file") to see full file of tutorial_9_1.c
```c
// Date 06-06-2021

#include <stdio.h>

int main()
{
    int a = 99;
    float b = 99.99;
    printf("int A with %%d = %d\nfloat B with %%f = %f\nfloat B with %%0.4f = %.4f\nfloat B with %%7.4f = %7.4f\nfloat B with %%8.4f = %8.4f\nfloat B with %%10.4f = %10.4f\t%%10.4f will print float B in the space of 10 characters starting left-to-right\nfloat B with %%-20.4f = %-20.4fs\t%%10.4f will print float B in the space of 20 characters starting right-to-left", a, b, b, b, b, b, b);

    return 0;
}
```
---
---
## **_tutorial_9_2_0.c_**
### [**_Click me_**](tutorial_9_2_0.c "Clike here to see full file") to see full file of tutorial_9_2_0.c
```c
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
```
---
---
## **_tutorial_9_2_1.c_**
### [**_Click me_**](tutorial_9_2_1.c "Clike here to see full file") to see full file of tutorial_9_2_1.c
```c
// Date 06-06-2021

#include <stdio.h>

int main()
{
    char tutorial_9_2_1 = 'f';
    printf("To print char use %%c \'%c\'\n", tutorial_9_2_1);
    return 0;
}
```
---
---
## **_tutorial_9_2_2.c_**
### [**_Click me_**](tutorial_9_2_2.c "Clike here to see full file") to see full file of tutorial_9_2_2.c
```c
// Date 06-06-2021

#include <stdio.h>

int main()
{
    char tutorial_9_2_2[] = "Aman";
    printf("To print string use %%s \'%s\'\n", tutorial_9_2_2);
    return 0;
}
```
---
---
## **_tutorial_9_2_3.c_**
### [**_Click me_**](tutorial_9_2_3.c "Clike here to see full file") to see full file of tutorial_9_2_3.c
```c
// Date 06-06-2021

#include <stdio.h>

int main()
{
    int tutorial_9_2_3_1 = 2015, tutorial_9_2_3_2 = 2020;
    printf("To print int use %%d \'%d\'\n", tutorial_9_2_3_1);
    printf("To print int use %%i \'%i\'\n", tutorial_9_2_3_2);
    return 0;
}
```
---
---
## **_tutorial_9_2_4.c_**
### [**_Click me_**](tutorial_9_2_4.c "Clike here to see full file") to see full file of tutorial_9_2_4.c
```c
// Date 06-06-2021

#include <stdio.h>

int main()
{
    float tutorial_9_2_4 = 99.999;
    printf("To print float use %%f \'%f\'\n", tutorial_9_2_4);
    printf("To print float use %%e \'%e\'\n", tutorial_9_2_4);
    return 0;
}
```
---
---
## **_tutorial_9_2_5.c_**
### [**_Click me_**](tutorial_9_2_5.c "Clike here to see full file") to see full file of tutorial_9_2_5.c
```c
// Date 06-06-2021

#include <stdio.h>

int main()
{
    int tutorial_9_2_5 = 30;
    printf("To print octa Decimal use %%o \'%o\'\n", tutorial_9_2_5);
    return 0;
}
```
---
---
## **_tutorial_9_2_6.c_**
### [**_Click me_**](tutorial_9_2_6.c "Clike here to see full file") to see full file of tutorial_9_2_6.c
```c
// Date 06-06-2021

#include <stdio.h>

int main()
{
    int tutorial_9_2_6 = 28;
    printf("To print hexa Decimal use %%x \'%x\'\n", tutorial_9_2_6);
    return 0;
}
```
---
---
## **_tutorial_9_2_7.c_**
### [**_Click me_**](tutorial_9_2_7.c "Clike here to see full file") to see full file of tutorial_9_2_7.c
```c
// Date 06-06-2021

#include <stdio.h>

int main()
{
    char tutorial_9_2_7;
    printf("To take input as char use %%c and in front of second argunment add \'&\'\n");
    scanf("%c", &tutorial_9_2_7);
    printf("You entered \'%c\'\n", tutorial_9_2_7);
    return 0;
}
```
---
---
## **_tutorial_9_2_8.c_**
### [**_Click me_**](tutorial_9_2_8.c "Clike here to see full file") to see full file of tutorial_9_2_8.c
```c
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
```
---
---
## **_tutorial_9_3_1.c_**
### [**_Click me_**](tutorial_9_3_1.c "Clike here to see full file") to see full file of tutorial_9_3_1.c
```c
// Date 06-06-2021

#include <stdio.h>

#define pi 3.141592653

int main()
{
    printf("Constant Pi is!%f", pi);

    //* pi = 3.14, //This will give an error because pi is a constant

    return 0;
}
```
---
---
## **_tutorial_9_3_2.c_**
### [**_Click me_**](tutorial_9_3_2.c "Clike here to see full file") to see full file of tutorial_9_3_2.c
```c
// Date 06-06-2021

#include <stdio.h>

int main()
{
    const float pi = 3.141592653;
    printf("Constant Pi is! %f", pi);

    //* pi = 3.14; //This will give an error because pi is a constant

    return 0;
}

```
---
---
## **_tutorial_10_1.c_**
### [**_Click me_**](tutorial_10_1.c "Clike here to see full file") to see full file of tutorial_10_1.c
```c
// Date 07-06-2021

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age!\n");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Your age is %d so you can vote!", age);
    }
    else if (age == 17)
    {
        printf("Your age is %d so you can vote next Year!", age);
    }
    else
    {
        printf("Your age is %d so you can't vote!", age);
    }

    return 0;
}
```
---
---
## **_tutorial_10_2_quiz_1.c_**
### [**_Click me_**](tutorial_10_2_quiz_1.c "Clike here to see full file") to see full file of tutorial_10_2_quiz_1.c
```c
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
```
---
---
## **_tutorial_11.c_**
### [**_Click me_**](tutorial_11.c "Clike here to see full file") to see full file of tutorial_11.c
```c
// Date 07-06-2021

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age!\n");
    scanf("%d", &age);

    switch (age)
    {
    case 18:
        printf("Your age is 18 so you can vote!");
        // age--;
        break;
    case 17:
        printf("Your age is 17 so you can vote next year!");
        break;
    case 16:
        printf("You are an teenager with age 17 so you can't vote!");
        break;

    default:
        printf("There is no case with age %d try another age!", age);
        break;
    }
    return 0;
}
```
---
---
## **_tutorial_13.c_**
### [**_Click me_**](tutorial_13.c "Clike here to see full file") to see full file of tutorial_13.c
```c
// Date 07-06-2021

#include <stdio.h>

int main()
{
    int index = 1;
    do
    {
        printf("Hello Aman %d!\n", index++);
    } while (index <= 0);
    //* Rember Do While loop will atleast run 1 time
    return 0;
}
```
---
---
## **_tutorial_14.c_**
### [**_Click me_**](tutorial_14.c "Clike here to see full file") to see full file of tutorial_14.c
```c
// Date 07-06-2021

#include <stdio.h>

int main()
{
    int index = 1;

    while (index <= 100)
    {
        printf("Hello Aman %d!\n", index++);
    }
    return 0;
}
```
---
---
## **_tutorial_15_1.c_**
### [**_Click me_**](tutorial_15_1.c "Clike here to see full file") to see full file of tutorial_15_1.c
```c
// Date 07-06-2021

#include <stdio.h>

int main()
{

    for (int index = 1; index <= 100; index++)
    {
        printf("Hello Aman %d!\n", index);
    }
    return 0;
}
```
---
---
## **_tutorial_15_2.c_**
### [**_Click me_**](tutorial_15_2.c "Clike here to see full file") to see full file of tutorial_15_2.c
```c
// Date 07-06-2021

#include <stdio.h>

int main()
{
    int index = 1;

    for (; index <= 100; index++)
    {
        printf("Hello Aman %d!\n", index);
    }
    return 0;
}
```
---
---
## **_tutorial_15_3.c_**
### [**_Click me_**](tutorial_15_3.c "Clike here to see full file") to see full file of tutorial_15_3.c
```c
// Date 07-06-2021

#include <stdio.h>

int main()
{
    int index_1 = 1, index_2 = 0;
    printf("Initial value of index_1 is %d!\n\n\n", index_2);

    for (; index_2 = 99, index_1 <= 10; index_1++)
    {
        printf("Value of index_1 is %d!\n", index_2);
        printf("Hello Aman %d!\n", index_1);
    }
    return 0;
}
```
---
---
## **_tutorial_15_4.c_**
### [**_Click me_**](tutorial_15_4.c "Clike here to see full file") to see full file of tutorial_15_4.c
```c
// Date 07-06-2021

#include <stdio.h>

int main()
{
    int index_1 = 1;

    for (; 1; index_1++)
    {
        //* This for loop will be an Infinite loop because second argunment of for loop is 1 which means true in C
        printf("Hello Aman %d!\n", index_1);
        //* This for loop will be an Infinite loop because second argunment of for loop is 1 which means true in C
    }
    return 0;
}
```
---
---
## **_tutorial_15_5.c_**
### [**_Click me_**](tutorial_15_5.c "Clike here to see full file") to see full file of tutorial_15_5.c
```c
// Date 07-06-2021

#include <stdio.h>

int main()
{
    int index_1 = 1;
    printf("Before loop\n");

    for (; 0; index_1++)
    {
        //* This for loop will not because second argunment of for loop is 0 which means False in C
        printf("Hello Aman %d!\n", index_1);
        //* This for loop will not because second argunment of for loop is 0 which means False in C
    }
    printf("After loop");
    return 0;
}
```
---
---
## **_tutorial_16_1.c_**
### [**_Click me_**](tutorial_16_1.c "Clike here to see full file") to see full file of tutorial_16_1.c
```c
// Date 08-06-2021

#include <stdio.h>

int main()
{
    int age;
    // printf("Hello Aman!");
    for (int i = 0; i < 10; i++)
    {
        printf("What is your age!\n");
        scanf("%d", &age);
        if (age > 60)
        {
            printf("Your age is %d which is too big!", age);
            break;
        }
    }
    return 0;
}
```
---
---
## **_tutorial_16_2.c_**
### [**_Click me_**](tutorial_16_2.c "Clike here to see full file") to see full file of tutorial_16_2.c
```c
// Date 08-06-2021

#include <stdio.h>

int main()
{
    int age;
    // printf("Hello Aman!");
    for (int i = 0; i < 10; i++)
    {
        printf("What is your age!\n");
        scanf("%d", &age);
        if (age > 60)
        {
            printf("Your age is %d which is too big!\nPlease Re-enter your age\n", age);
            continue;
        }
    }
    return 0;
}
```
---
---
## **_tutorial_17_1.c_**
### [**_Click me_**](tutorial_17_1.c "Clike here to see full file") to see full file of tutorial_17_1.c
```c
// Date 08-06-2021

#include <stdio.h>

int main()
{
label_1:
    printf("We are inside Lable 1\n");
    goto end;
    printf("Hello World!\n");
end:
    printf("We are at the end\n");
    return 0;
}
```
---
---
## **_tutorial_17_2.c_**
### [**_Click me_**](tutorial_17_2.c "Clike here to see full file") to see full file of tutorial_17_2.c
```c
// Date 08-06-2021

#include <stdio.h>

int main()
{
    goto label_2;
label_1:
    printf("We are inside Lable 1\n");
    goto final_end;
label_2:
    printf("We are inside Lable 2\n");
    goto end;
end:
    printf("We are at the end\n");
    goto label_1;
final_end:
    return 0;
}
```
---
---
## **_tutorial_17_3.c_**
### [**_Click me_**](tutorial_17_3.c "Clike here to see full file") to see full file of tutorial_17_3.c
```c
// Date 08-06-2021

#include <stdio.h>

int main()
{

    for (int i = 0; i < 10; i++)
    {
        printf("For for loop 1 i = %d\n", i);
        for (int j = 0; j < 3; j++)
        {
            printf("\tFor for loop 2 j = %d\n", j);
            for (int k = 0; k < 2; k++)
            {
                printf("\t\tFor for loop 3 k = %d\n", k);
                for (int l = 0; l < 1; l++)
                {
                    printf("\t\t\tFor for loop 4 l = %d\n", l);
                    if (i == 4)
                    {
                        goto end_of_loop;
                    }
                }
            }
        }
    }
    //* Now to break these multiple for loops with single statement we use goto

end_of_loop:
    printf("This is the end of our loops");
    return 0;
}
```
---
---
## **_tutorial_17_4.c_**
### [**_Click me_**](tutorial_17_4.c "Clike here to see full file") to see full file of tutorial_17_4.c
```c
// Date 08-06-2021

#include <stdio.h>

int main()
{
    int num;

    for (int i = 0; i < 2; i++)
    {
        printf("For for loop 1 i = %d\n", i);
        for (int j = 0; j < 3; j++)
        {
            printf("\tFor for loop 2 j = %d\n", j);
            for (int k = 0; k < 2; k++)
            {
                printf("\t\tFor for loop 3 k = %d\n", k);
                for (int l = 0; l < 1; l++)
                {
                    printf("\t\t\tFor for loop 4 l = %d\n", l);
                    printf("Enter 0 to exit all loops\n");
                    scanf("%d", &num);
                    if (num == 0)
                    {
                        goto end_of_loop;
                    }
                }
            }
        }
    }

end_of_loop:
    printf("This is the end of our loops");
    return 0;
}
```
---
---
## **_tutorial_18_1.c_**
### [**_Click me_**](tutorial_18_1.c "Clike here to see full file") to see full file of tutorial_18_1.c
```c
// Date 08-06-2021

#include <stdio.h>

int main()
{
    int a = 10;
    float b = 21.324432;
    printf("The value of a is %d\nReal Value of b is %f\nThe value of b is %f (Without typecast and with %%d)\nThe value of b is %d (With typecast into int and with %%d)", a, b, b, (int)b);

    return 0;
}
```
---
---
## **_tutorial_18_2.c_**
### [**_Click me_**](tutorial_18_2.c "Clike here to see full file") to see full file of tutorial_18_2.c
```c
// Date 08-06-2021

#include <stdio.h>

int main()
{
    float pi = (float)22 / 7;
    float PI = 22 / 7;
    printf("The value of PI is %f\n", PI);
    printf("The value of pi is %f\n", pi);
    return 0;
}
```
---
---
## **_tutorial_19_1.c_**
### [**_Click me_**](tutorial_19_1.c "Clike here to see full file") to see full file of tutorial_19_1.c
```c
// Date 08-06-2021

#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    printf("Sum function return value is %d", sum(7, 3));

    return 0;
}
```
---
---
## **_tutorial_19_2.c_**
### [**_Click me_**](tutorial_19_2.c "Clike here to see full file") to see full file of tutorial_19_2.c
```c
// Date 08-06-2021

#include <stdio.h>

int sum();

int main()
{
    printf("Sum function return value is %d", sum(7, 3));

    return 0;
}
int sum(int a, int b)
{
    return a + b;
}

```
---
---
## **_tutorial_19_3.c_**
### [**_Click me_**](tutorial_19_3.c "Clike here to see full file") to see full file of tutorial_19_3.c
```c
// Date 08-06-2021

#include <stdio.h>
int take_number();

int main()
{
    printf("Enter the number\n");
    int number = take_number();
    printf("Your entered number is %d ", number);

    return 0;
}

int take_number(void)
{
    int number;
    scanf("%d", &number);
    return number;
}
```
---
---
## **_tutorial_19_4_quiz_2.c_**
### [**_Click me_**](tutorial_19_4_quiz_2.c "Clike here to see full file") to see full file of tutorial_19_4_quiz_2.c
```c
// Date 08-06-2021

//* Make a function which takes no arguments an returns nothing

#include <stdio.h>

void print();

int main()
{
    printf("By running print function we get\n");
    print();

    return 0;
}

void print(void)
{
    printf("This is written inside print function");
}
```
---
---
## **_tutorial_21.c_**
### [**_Click me_**](tutorial_21.c "Clike here to see full file") to see full file of tutorial_21.c
```c
// Date 08-06-2021

#include <stdio.h>

int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

int main()
{
    int num;
    printf("Enter a number to know it's Factorial\n");
    scanf("%d", &num);

    printf("Factorial of %d is %d", num, factorial(num));

    return 0;
}
```
---
---
## **_tutorial_22_exercise_2.c_**
### [**_Click me_**](tutorial_22_exercise_2.c "Clike here to see full file") to see full file of tutorial_22_exercise_2.c
```c
// Date 08-06-2021

//* Make a program which asks user to convert which thing from the following
//* kms to miles
//* inches to foot
//* cms to inches
//* pounds to kg
//* inches to meters

#include <stdio.h>

int main()
{
    int choice;
    float conversion_value;
start:
    printf("Please select what you want to convert\nEnter 1 for Kilometer to Miles\nEnter 2 for Inches to Foot\nEnter 3 for Centimeter to Inches\nEnter 4 for Pounds to Kilogram\nEnter 5 for Inches to Meters\n");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Please enter Kilometer\n");
        scanf("%f", &conversion_value);
        printf("%f Kilometer equals to %f Miles\n", conversion_value, conversion_value * (float)0.621371);
        break;
    case 2:
        printf("Please enter Inches\n");
        scanf("%f", &conversion_value);
        printf("%f Inches equals to %f Foot\n", conversion_value, conversion_value * (float)0.0833333);
        break;
    case 3:
        printf("Please enter Centimeter\n");
        scanf("%f", &conversion_value);
        printf("%f Centimeter equals to %f Inches\n", conversion_value, conversion_value * (float)0.393701);
        break;
    case 4:
        printf("Please enter Pounds\n");
        scanf("%f", &conversion_value);
        printf("%f Pounds equals to %f Kilogram\n", conversion_value, conversion_value * (float)0.453592);
        break;
    case 5:
        printf("Please enter Inches\n");
        scanf("%f", &conversion_value);
        printf("%f Inches equals to %f Meter\n", conversion_value, conversion_value * (float)0.0254);
        break;

    default:
        printf("Please select a valid option\n");
        goto start;
    }
    return 0;
}
```
---
---
## **_tutorial_23_1.c_**
### [**_Click me_**](tutorial_23_1.c "Clike here to see full file") to see full file of tutorial_23_1.c
```c
// Date 08-06-2021

#include <stdio.h>

int main()
{
    int marks[5];
    // marks[4] = 10;
    // printf("%d", marks[4]);
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element of Array marks\n", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("Value of %d element of Array marks is %d\n", i, marks[i]);
    }

    // printf("%d", sizeof(marks));

    // printf("%d", marks[:]);

    // marks[0] = 10;
    // printf("Mark 0 is %d!", marks[0]);

    return 0;
}
```
---
---
## **_tutorial_23_2.c_**
### [**_Click me_**](tutorial_23_2.c "Clike here to see full file") to see full file of tutorial_23_2.c
```c
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
```
---
---
## **_tutorial_25_exercise_3_part_0.c_**
### [**_Click me_**](tutorial_25_exercise_3_part_0.c "Clike here to see full file") to see full file of tutorial_25_exercise_3_part_0.c
```c
// Date 08-06-2021

//* Write a program to print a fibonacci series (take input from user) using Reccursion and Itertative Function and conclude that which method is taking more time

//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function

#include <stdio.h>

int fibonacci_with_iterative(int num)
{
    int seed_a = 0, seed_b = 1;
    if (num == 1)
    {
        return 1;
    }
    else if (num == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < num - 1; i++)
        {
            seed_b += seed_a;
            seed_a = seed_b - seed_a;
        }
        return seed_b;
    }
}
int fibonacci_with_reccursion(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci_with_reccursion(num - 1) + fibonacci_with_reccursion(num - 2);
    }
}

int main()
{
    while (1)
    {
        int num;

        printf("Enter a number to know it's fibonacci\n");
        scanf("%d", &num);
        printf("By using Iterative Fibonacci of number %d is %d!\n", num, fibonacci_with_iterative(num));
        printf("By using Reccursion Fibonacci of number %d is %d!\n", num, fibonacci_with_reccursion(num));
    }
    return 0;
}
```
---
---
## **_tutorial_25_exercise_3_part_1.c_**
### [**_Click me_**](tutorial_25_exercise_3_part_1.c "Clike here to see full file") to see full file of tutorial_25_exercise_3_part_1.c
```c
// Date 08-06-2021

//* Write a program to print a fibonacci series (take input from user) using Reccursion and Itertative Function and conclude that which method is taking more time

//* Using Reccursion
//* Using Reccursion
//* Using Reccursion
//* Using Reccursion
//* Using Reccursion
//* Using Reccursion
//* Using Reccursion
//* Using Reccursion
//* Using Reccursion
//* Using Reccursion

#include <stdio.h>

int fibonacci_with_reccursion(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci_with_reccursion(num - 1) + fibonacci_with_reccursion(num - 2);
    }
}

int main()
{
    int num;

    printf("Enter a number to know it's fibonacci\n");
    scanf("%d", &num);
    printf("Fibonacci of number %d is %d!", num, fibonacci_with_reccursion(num));

    return 0;
}
```
---
---
## **_tutorial_25_exercise_3_part_2.c_**
### [**_Click me_**](tutorial_25_exercise_3_part_2.c "Clike here to see full file") to see full file of tutorial_25_exercise_3_part_2.c
```c
// Date 08-06-2021

//* Write a program to print a fibonacci series (take input from user) using Reccursion and Itertative Function and conclude that which method is taking more time

//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function
//* Using Itertative Function

#include <stdio.h>

// int fibonacci(int num)
// {
//     if (num == 0)
//     {
//         return 0;
//     }
//     else if (num == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return fibonacci(num - 1) + fibonacci(num - 2);
//     }
// }

int fibonacci_with_iterative(int num)
{
    int seed_a = 0, seed_b = 1;
    if (num == 1)
    {
        return 1;
    }
    else if (num == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < num - 1; i++)
        {
            seed_b += seed_a;
            seed_a = seed_b - seed_a;
        }
        return seed_b;
    }
}

int main()
{
    while (1)
    {
        int num;
        printf("Enter a number to know it's fibonacci\n");
        scanf("%d", &num);
        printf("Fibonacci of number %d is %d!\n", num, fibonacci_with_iterative(num));
    }
    return 0;
}
```
---
---
## **_tutorial_26_1.c_**
### [**_Click me_**](tutorial_26_1.c "Clike here to see full file") to see full file of tutorial_26_1.c
```c
// Date 09-06-2021

#include <stdio.h>

int main()
{
    int a = 10;
    int *pointer_of_a = &a;
    printf("Pointers are printed by using \'%%x\' which is a Hexa Decimal Format Specifier\n");
    printf("The value of \'a\' is %d\n", a);
    printf("The value of \'&a\' is %x\n", &a);
    printf("The value of \'pointer_of_a\' is %x\n", pointer_of_a);
    printf("The value of \'*pointer_of_a\' is %x\n", *pointer_of_a);
    printf("The value of \'&pointer_of_a\' is %x\n", &pointer_of_a);
    printf("The size of \'pointer_of_a\' is %d\n", sizeof(pointer_of_a));
    // printf("The size of \'pointer_of_a\' is %d\n", sizeof(int *));
    // printf("The value of Pointer of A is %d\n", &pointer_of_a);
    // printf("");

    return 0;
}
```
---
---
## **_tutorial_26_2.c_**
### [**_Click me_**](tutorial_26_2.c "Clike here to see full file") to see full file of tutorial_26_2.c
```c
// Date 09-06-2021

#include <stdio.h>

int main()
{
    int a = 10;
    int *pointer_of_a = &a;
    printf("Pointers are printed by using \'%%p\' which is a dedicated Format Specifier for Pointer\n");
    printf("The value of \'a\' is %d\n", a);
    printf("The value of \'&a\' is %p\n", &a);
    printf("The value of \'pointer_of_a\' is %p\n", pointer_of_a);
    printf("The value of \'*pointer_of_a\' is %d\n", *pointer_of_a);
    printf("The value of \'&pointer_of_a\' is %p\n", &pointer_of_a);
    printf("The size of \'pointer_of_a\' is %d\n", sizeof(pointer_of_a));
    // printf("The size of \'pointer_of_a\' is %d\n", sizeof(int *));
    // printf("The value of Pointer of A is %d\n", &pointer_of_a);
    // printf("");

    return 0;
}
```
---
---
## **_tutorial_26_3.c_**
### [**_Click me_**](tutorial_26_3.c "Clike here to see full file") to see full file of tutorial_26_3.c
```c
// Date 09-06-2021

#include <stdio.h>

int main()
{
    int *null_pointer_with_null_declaration = NULL;

    int *null_pointer_without_null_declaration;

    printf("Value of \'null_pointer_with_null_declaration\' is %p! by using Pointer format specifier \'%%p\'\n", null_pointer_with_null_declaration);
    printf("Value of \'null_pointer_without_null_declaration\' is %p! by using Pointer format specifier \'%%p\'\n", null_pointer_without_null_declaration);

    return 0;
}
```
---
---
## **_tutorial_27_1_1.c_**
### [**_Click me_**](tutorial_27_1_1.c "Clike here to see full file") to see full file of tutorial_27_1_1.c
```c
// Date 09-06-2021

#include <stdio.h>

int main()
{
    int a = 10;
    int *pointer_of_a = &a;
    printf("Value of \'a\' is %d\n", a);
    printf("Value of \'pointer_of_a\' is %d\n", pointer_of_a);
    printf("Value of \'pointer_of_a + 1\' is %d\n", pointer_of_a + 1);
    printf("Value of \'*pointer_of_a\' is %d\n", *pointer_of_a);
    pointer_of_a--;
    printf("Value of \'*pointer_of_a\' (After \'pointer_of_a--\') is %d (which is a garbage value)\n", *pointer_of_a);

    return 0;
}
```
---
---
## **_tutorial_27_1_2.c_**
### [**_Click me_**](tutorial_27_1_2.c "Clike here to see full file") to see full file of tutorial_27_1_2.c
```c
// Date 09-06-2021

#include <stdio.h>

int main()
{
    int a = 10;
    int *pointer_of_a = &a;
    printf("Value of \'a\' is %d\n", a);
    printf("Value of \'pointer_of_a\' is %d\n", pointer_of_a);
    printf("Value of \'pointer_of_a + 1\' is %d\n", pointer_of_a + 1);
    printf("Value of \'*pointer_of_a\' is %d\n", *pointer_of_a);
    pointer_of_a--;
    printf("Value of \'*pointer_of_a\' (After \'pointer_of_a--\') is %d (which is a garbage value)\n", *pointer_of_a);

    return 0;
}
```
---
---
## **_tutorial_27_2_1.c_**
### [**_Click me_**](tutorial_27_2_1.c "Clike here to see full file") to see full file of tutorial_27_2_1.c
```c
// Date 09-06-2021

#include <stdio.h>

int main()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("\n\n\nValue of \'&array\' is %d (%d is address of first element (and base address) of array)\n", &array, &array);
    printf("Value of \'&array[0]\' is %d (%d is address of first element (and base address) of array)\n", &array[0], &array[0]);
    printf("Value of \'array\' is %d (%d is address of first element (and base address) of array)\n\n", array, array);
    // //* Note: value of &array[0] = &array = array

    printf("Value of \'&array[1]\' is %d (%d is address of second element of array)\n", &array[1], &array[1]);
    printf("Value of \'array + 1\' is %d (%d is address of second element of array)\n\n", array + 1, array + 1);
    //* Note: &array[1] and array + 1 are same

    printf("Value of \'&array[2]\' is %d (%d is address of third element of array)\n", &array[2], &array[2]);
    printf("Value of \'array + 2\' is %d (%d is address of third element of array)\n\n", array + 2, array + 2);
    //* Note: &array[2] and array + 2 are same

    //* Note: &array[n] and array + n are same

    return 0;
}
```
---
---
## **_tutorial_27_2_2.c_**
### [**_Click me_**](tutorial_27_2_2.c "Clike here to see full file") to see full file of tutorial_27_2_2.c
```c
// Date 09-06-2021

#include <stdio.h>

int main()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("\n\n\nValue of \'*(&array)\' is %d (%d is address of first element of array)\n", *(&array), *(&array));
    printf("Value of \'*(&array[0])\' is %d (%d is value of first element of array)\n", *(&array[0]), *(&array[0]));
    printf("Value of \'*array\' is %d (%d is value of first element of array)\n\n", *(array), *(array));
    // //* Note: value of *(&array[0]) = *(array) ,but != *(&array)

    printf("Value of \'*(&array[1])\' is %d (%d is value of second element of array)\n", *(&array[1]), *(&array[1]));
    printf("Value of \'*(array + 1)\' is %d (%d is value of second element of array)\n\n", *(array + 1), *(array + 1));
    //* Note: *(&array[1]) and *(array + 1) are same

    printf("Value of \'*(&array[2])\' is %d (%d is value of third element of array)\n", *(&array[2]), *(&array[2]));
    printf("Value of \'*(array + 2)\' is %d (%d is value of third element of array)\n\n", *(array + 2), *(array + 2));
    //* Note: *(&array[2]) and *(array + 2) are same

    //* Note: *(&array[n]) and *(array + n) are same

    return 0;
}
```
---
---
## **_tutorial_29_quiz_3.c_**
### [**_Click me_**](tutorial_29_quiz_3.c "Clike here to see full file") to see full file of tutorial_29_quiz_3.c
```c
// Date 09-06-2021

//* if you use recursive approach in finding Fibonacci of 22 then how much time Fibonacci of 19 will be calculated
//* You can take reference from "tutorial_25_exercise_2_part_1.c"

//* Anwser is 3
//* By just putting a simple line to the functuion i.e.
//! if (num == 19)
//!     {
//!         printf("19 printed\n");
//!     }

//* Anwser is 3
//* By just putting a simple line to the functuion i.e.
//! if (num == 19)
//!     {
//!         printf("19 printed\n");
//!     }
//* Anwser is 3
//* By just putting a simple line to the functuion i.e.
//! if (num == 19)
//!     {
//!         printf("19 printed\n");
//!     }

//* Anwser is 3
//* By just putting a simple line to the functuion i.e.
//! if (num == 19)
//!     {
//!         printf("19 printed\n");
//!     }
//* Anwser is 3
//* By just putting a simple line to the functuion i.e.
//! if (num == 19)
//!     {
//!         printf("19 printed\n");
//!     }

//* Anwser is 3
//* By just putting a simple line to the functuion i.e.
//! if (num == 19)
//!     {
//!         printf("19 printed\n");
//!     }
//* Anwser is 3
//* By just putting a simple line to the functuion i.e.
//! if (num == 19)
//!     {
//!         printf("19 printed\n");
//!     }

//* Anwser is 3
//* By just putting a simple line to the functuion i.e.
//! if (num == 19)
//!     {
//!         printf("19 printed\n");
//!     }
//* Anwser is 3
//* By just putting a simple line to the functuion i.e.
//! if (num == 19)
//!     {
//!         printf("19 printed\n");
//!     }

//* Anwser is 3
//* By just putting a simple line to the functuion i.e.
//! if (num == 19)
//!     {
//!         printf("19 printed\n");
//!     }

#include <stdio.h>

int fibonacci_with_reccursion(int num)
{
    if (num == 19)
    {
        printf("19 printed\n");
    }
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci_with_reccursion(num - 1) + fibonacci_with_reccursion(num - 2);
    }
}

int main()
{
    int num;

    printf("Fibonacci of number 22 is %d", fibonacci_with_reccursion(22));

    return 0;
}

//* Anwser is 3
//* By just putting a simple line to the functuion i.e.
//! if (num == 19)
//!     {
//!         printf("19 printed\n");
//!     }
```
---
---
## **_tutorial_30_exercise_4.c_**
### [**_Click me_**](tutorial_30_exercise_4.c "Clike here to see full file") to see full file of tutorial_30_exercise_4.c
```c
// Date 09-06-2021

//* Take input from the user and ask user to choose 1 for triangular star pattern and 2 for reversed triangular star pattern
//* Then print the pattern accordingly

//* Triangular star pattern
//* *
//* **
//* ***
//* ****
//* *****

//* Reversed triangular star pattern
//* *****
//* ****
//* ***
//* **
//* *

//* Note: Also ask user that how many line he/she need to print

#include <stdio.h>

int main()
{
    int type, how_many_lines;
    char symbol = '*';

    while (1)
    {
        // printf("Now tell which symbol you need in your pattern\n");
        // scanf("%c", &symbol);

        printf("What you need to print i.e. Triangular star pattern or Reversed triangular star pattern!\nEnter 1 for Triangular star pattern\nEnter 2 for Reversed triangular star pattern\n");
        scanf("%d", &type);

        if (type != 1 && type != 2)
        {
            printf("\n\n\nPlease chose a valid option i.e. \'1\' or \'2\'\n");
            continue;
        }

        printf("Now tell how many lines you need to print of Star pattern\n");
        scanf("%d", &how_many_lines);

        // printf("%c", symbol);

        switch (type)
        {
        case 1:
            for (int i = 1; i <= how_many_lines; i++)
            {
                for (int j = 0; j != i; j++)
                {
                    printf("%c", symbol);
                }
                printf("\n");
            }
            break;
        default:

            //* For case 2 i.e. when type == 2
            //* For case 2 i.e. when type == 2

            for (int i = how_many_lines; i != 0; i--)
            {
                for (int j = i; j != 0; j--)
                {
                    printf("%c", symbol);
                }
                printf("\n");
            }
            break;
        }

        return 0;
    }
}
```
---
---
## **_tutorial_31_1_1.c_**
### [**_Click me_**](tutorial_31_1_1.c "Clike here to see full file") to see full file of tutorial_31_1_1.c
```c
// Date 09-06-2021

#include <stdio.h>

int swap_value_without_call_by_reference(int a, int b)
{
    int temporary_variable = a;
    b = a;
    a = temporary_variable;
}

int main()
{
    int a = 10, b = 20;
    printf("Value of \'a\' before function call is %d\n", a);
    printf("Value of \'b\' before function call is %d\n", b);

    swap_value_without_call_by_reference(a, b);

    printf("Value of \'a\' after function call is %d\n", a);
    printf("Value of \'b\' after function call is %d\n", b);

    return 0;
}
```
---
---
## **_tutorial_31_1_2.c_**
### [**_Click me_**](tutorial_31_1_2.c "Clike here to see full file") to see full file of tutorial_31_1_2.c
```c
// Date 09-06-2021

#include <stdio.h>

void swap_value_with_call_by_reference(int *a_address, int *b_address)
{

    //! int temporary_variable = *a_address;
    //! *a_address = *b_address;
    //! *b_address = temporary_variable;

    *a_address += *b_address;
    *b_address = *a_address - *b_address;
    *a_address -= *b_address;
}

int main()
{
    int a = 10, b = 20;
    printf("Value of \'a\' before function call is %d\n", a);
    printf("Value of \'b\' before function call is %d\n\n\n", b);

    swap_value_with_call_by_reference(&a, &b);

    printf("Value of \'a\' after function call is %d\n", a);
    printf("Value of \'b\' after function call is %d\n", b);

    // printf("Value of \'a\' before function call is %d\n", a);
    return 0;
}
```
---
---
## **_tutorial_31_2_quiz_4.c_**
### [**_Click me_**](tutorial_31_2_quiz_4.c "Clike here to see full file") to see full file of tutorial_31_2_quiz_4.c
```c
// Date 09-06-2021

//* Quiz:
//* Given two numbers a and b, add them then subtract them and assign them to a and b using call by reference.

//* a = 4
//* b = 3

//* after running the function, the values of a and b should be:
//* a = 7 (a + b)
//* b = 1 (a - b)

void add_and_subtract(int *a, int *b)
{
    //* Let a = 4
    //* Let b = 3
    *a += *b;          //* 4 + 3 = 7 ; a = 7
    *b = *a - *b - *b; //* (7 - 3) - 3; b = 1 ; (7 - 3) = a
}

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the value of \'a\'!\n");
    scanf("%d", &a);
    printf("Enter the value of \'b\'!\n");
    scanf("%d", &b);

    add_and_subtract(&a, &b);

    printf("Value of \'a\' after function call is %d\n", a);
    printf("Value of \'b\' after function call is %d\n", b);

    return 0;
}
```
---
---
## **_tutorial_32_1.c_**
### [**_Click me_**](tutorial_32_1.c "Clike here to see full file") to see full file of tutorial_32_1.c
```c
// Date 09-06-2021

#include <stdio.h>

float array_average_finder(int array[])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += array[i];
    }
    return (float)sum / 10;
}

int main()
{
    int array_1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("Average of \'array_1\' is %f", array_average_finder(array_1));

    return 0;
}
```
---
---
## **_tutorial_32_2.c_**
### [**_Click me_**](tutorial_32_2.c "Clike here to see full file") to see full file of tutorial_32_2.c
```c
// Date 09-06-2021

#include <stdio.h>

void array_value_doubler(int *array)
{
    // printf("%d\n", array);
    // printf("%d\n", array + 1);
    // int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        *(array + i) += *(array + i);
    }
    // return (float)sum / 10;
}

void print_aray(int array[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("Value of array on index %d is %d\n", i, array[i]);
    }
}

int main()
{
    int array_1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    print_aray(array_1);
    array_value_doubler(array_1);
    printf("\n\nNow changed doubled values are\n");
    print_aray(array_1);
    // printf("%d", array_1[1]);

    return 0;
}
```
---
---
## **_tutorial_34_1_1.c_**
### [**_Click me_**](tutorial_34_1_1.c "Clike here to see full file") to see full file of tutorial_34_1_1.c
```c
// Date 10-06-2021

#include <stdio.h>

void print_string(char string[])
{
    int i = 0;
    while (string[i] != '\0')
    {
        printf("%c", string[i++]);
    }
    printf("\nThis string (array) has length of %d\n", i);
}

int main()
{
    //* The below two lines are not a valid syntax to declare a string and these two lines are also not a good practice to declare a string in C
    //! char str[] = {'A', 'm', 'a', 'n'};
    //! print_string(str);
    //* The above two lines are not a valid syntax to declare a string and these two lines are also not a good practice to declare a string in C

    //* The below two lines are a good practice to declare a string
    char str[] = {'A', 'm', 'a', 'n', '\0'};
    print_string(str);
    //* The above two lines are a good practice to declare a string

    // printf("");
    return 0;
}

```
---
---
## **_tutorial_34_1_2.c_**
### [**_Click me_**](tutorial_34_1_2.c "Clike here to see full file") to see full file of tutorial_34_1_2.c
```c
// Date 10-06-2021

#include <stdio.h>

void print_string(char string[])
{
    int i = 0;
    while (string[i] != '\0')
    {
        printf("%c", string[i++]);
    }
    printf("\nThis string (array) has length of %d\n", i);
}

int main()
{
    //* The below two lines are a good practice to declare a string
    char str[] = "Aman";
    print_string(str);
    //* The above two lines are a good practice to declare a string

    //* Note: char str[] = "Aman" and char str[] = {'A', 'm', 'a', 'n', '\0'} are same for compiler

    // printf("");
    return 0;
}

```
---
---
## **_tutorial_34_1_3.c_**
### [**_Click me_**](tutorial_34_1_3.c "Clike here to see full file") to see full file of tutorial_34_1_3.c
```c
// Date 10-06-2021

#include <stdio.h>

void print_string(char string[])
{
    int i = 0;
    while (string[i] != '\0')
    {
        printf("%c", string[i++]);
    }
    printf("\nThis string (array) has length of %d\n", i);
}

int main()
{
    //* The below two lines are not a valid syntax to declare a string becaue there is no space left for compiler to add NULL character i.e. \0 in the end of the string (array)
    //! char str[4] = "Aman";
    //! print_string(str);
    //* The above two lines are not a valid syntax to declare a string becaue there is no space left for compiler to add NULL character i.e. \0 in the end of the string (array)

    //* The below two lines are a good practice to declare a string because there is 1 space left for compiler to add NULL character i.e. \0 in the end of the string (array)
    char str[5] = "Aman";
    print_string(str);
    //* The above two lines are a good practice to declare a string because there is 1 space left for compiler to add NULL character i.e. \0 in the end of the string (array)

    //* The below two lines are also bad practice to declare a string because there is 1 extra space left in array after adding NULL character i.e. \0; which is wastage of storage
    //! char str[6] = "Aman";
    //! print_string(str);
    //* The above two lines are also bad practice to declare a string because there is 1 extra space left in array after adding NULL character i.e. \0; which is wastage of storage

    // printf("");
    return 0;
}

```
---
---
## **_tutorial_34_1_4.c_**
### [**_Click me_**](tutorial_34_1_4.c "Clike here to see full file") to see full file of tutorial_34_1_4.c
```c
// Date 10-06-2021

#include <stdio.h>

void print_string(char string[])
{
    int i = 0;
    while (string[i] != '\0')
    {
        printf("%c", string[i++]);
    }
    printf("\nThis string (array) has length of %d\n", i);
}

int main()
{
    char str[5] = "Aman";

    printf("String will print by using custom function\n");
    print_string(str);

    printf("\n\nNow string will print by using an studio function \'puts()\'\n");
    puts(str);

    // printf("");
    return 0;
}

```
---
---
## **_tutorial_34_1_5.c_**
### [**_Click me_**](tutorial_34_1_5.c "Clike here to see full file") to see full file of tutorial_34_1_5.c
```c
// Date 10-06-2021

#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string with a length of 100 program will take input from you by using an studio function \'puts()\'\n");
    gets(str);

    printf("You entered the following words this is printed by using an studio function \'puts()\'\n");
    puts(str);

    // printf("");
    return 0;
}

```
---
---
## **_tutorial_34_2_quiz_5.c_**
### [**_Click me_**](tutorial_34_2_quiz_5.c "Clike here to see full file") to see full file of tutorial_34_2_quiz_5.c
```c
// Date 10-06-2021

//* Why the following lines of code will give an Error
//! char str[5];
//! str = "HELLO";

#include <stdio.h>

int main()
{
    // char str[5];
    // str = "H";
    // printf("Hello Aman!");

    return 0;
}

```
---
---
## **_tutorial_35_1_1.c_**
### [**_Click me_**](tutorial_35_1_1.c "Clike here to see full file") to see full file of tutorial_35_1_1.c
```c
// Date 10-06-2021

#include <stdio.h>
#include <string.h>

int main()
{
    char str_1[] = "Aman";
    char str_2[] = "Aman";

    puts(strcat(str_1, str_2));

    return 0;
}
```
---
---
## **_tutorial_35_1_2.c_**
### [**_Click me_**](tutorial_35_1_2.c "Clike here to see full file") to see full file of tutorial_35_1_2.c
```c
// Date 10-06-2021

#include <stdio.h>
#include <string.h>

int main()
{
    char str_1[] = "Aman";
    char str_2[] = "Aman";

    printf("Lengths of \'str_1\' is %d\n", strlen(str_1));
    printf("Lengths of \'str_2\' is %d\n", strlen(str_2));
    printf("Lengths of \'strcat(str_1, str_2)\' is %d\n", strlen(strcat(str_1, str_2)));

    // puts(strcat(str_1, str_2));

    return 0;
}
```
---
---
## **_tutorial_35_1_3.c_**
### [**_Click me_**](tutorial_35_1_3.c "Clike here to see full file") to see full file of tutorial_35_1_3.c
```c
// Date 10-06-2021

#include <stdio.h>
#include <string.h>

int main()
{
    char str_1[] = "Aman1";
    char str_2[] = "Aman2";

    printf("The reverse string of \'str_1\' is ");
    puts(strrev(str_1));

    printf("The reverse string of \'str_1 and str_2\' is ");
    puts(strrev(strcat(str_1, str_2)));
    printf("It is \'2namAAman1\' not \'2namA1namA\' because \'str_1\' has already been reversed!");

    return 0;
}
```
---
---
## **_tutorial_35_1_4.c_**
### [**_Click me_**](tutorial_35_1_4.c "Clike here to see full file") to see full file of tutorial_35_1_4.c
```c
// Date 10-06-2021

#include <stdio.h>
#include <string.h>

int main()
{
    char str_1[] = "Aman1";
    char str_2[] = "Aman2";
    char str_3[100];

    printf("Value of \'str_1\' is ");
    puts(str_1);

    printf("Value of \'str_2\' is ");
    puts(str_2);

    printf("Value of \'str_3\' is ");
    strcpy(str_3, strcat(str_1, str_2));
    puts(str_3);

    return 0;
}
```
---
---
## **_tutorial_35_1_5.c_**
### [**_Click me_**](tutorial_35_1_5.c "Clike here to see full file") to see full file of tutorial_35_1_5.c
```c
// Date 10-06-2021

#include <stdio.h>
#include <string.h>

int main()
{
    char str_1[] = "A";
    char str_2[] = "B";

    char str_3[] = "A";
    char str_4[] = "A";

    char str_5[] = "Aman";
    char str_6[] = "Suresh";

    printf("Value of \'strcmp(str_1,str_2)\' is %d\n", strcmp(str_1, str_2));
    printf("Value of \'strcmp(str_2,str_1)\' is %d\n\n", strcmp(str_2, str_1));

    printf("Value of \'strcmp(str_3,str_4)\' is %d\n", strcmp(str_3, str_4));
    printf("Value of \'strcmp(str_4,str_3)\' is %d\n\n", strcmp(str_4, str_3));

    printf("Value of \'strcmp(str_5,str_6)\' is %d\n", strcmp(str_5, str_6));
    printf("Value of \'strcmp(str_6,str_5)\' is %d\n\n\n", strcmp(str_6, str_5));

    printf("Note \'strcmp(str,str)\' will only return \'-1\', \'0\' or \'1\'\n\n");
    // puts(str_1);

    return 0;
}
```
---
---
## **_tutorial_35_2_quiz_6.c_**
### [**_Click me_**](tutorial_35_2_quiz_6.c "Clike here to see full file") to see full file of tutorial_35_2_quiz_6.c
```c
// Date 10-06-2021

//* Quiz
//* allow user to enter two strings and then concatenate them by saying that
//* str1 is a friend of str2

#include <stdio.h>
#include <string.h>

int main()
{
    char str_1[100];
    char str_2[100];
    char str_3[] = " is a friend of ";

    printf("Enter value of string 1\n");
    gets(str_1);

    printf("Enter value of string 2\n");
    gets(str_2);

    printf("\n\n");
    puts(strcat(str_1, strcat(str_3, str_2)));

    return 0;
}
```
---
---
## **_tutorial_36_exercise_5.c_**
### [**_Click me_**](tutorial_36_exercise_5.c "Clike here to see full file") to see full file of tutorial_36_exercise_5.c
```c
// Date 10-06-2021

#include <stdio.h>

void print_aray();

void array_reverse(int *ary)
{
    int temp;
    for (int i = 0; i < 11 / 2; i++)
    {
        temp = ary[i];
        ary[i] = ary[10 - i];
        ary[10 - i] = temp;
    }
}

int main()
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print_aray(array);

    printf("\n\nThe reversed Array is\n");

    array_reverse(array);

    print_aray(array);

    return 0;
}
void print_aray(int array[])
{
    for (int i = 0; i <= 10; i++)
    {
        printf("Value of array on index %d is %d\n", i, array[i]);
    }
}
```
---
---
## **_tutorial_37_1.c_**
### [**_Click me_**](tutorial_37_1.c "Clike here to see full file") to see full file of tutorial_37_1.c
```c
// Date 10-06-2021

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

    printf("Employee with Employee id %d full name is %s\n", rohan.id, rohan.full_name);
    return 0;
}
```
---
---
## **_tutorial_37_2_quiz_7_part_1.c_**
### [**_Click me_**](tutorial_37_2_quiz_7_part_1.c "Clike here to see full file") to see full file of tutorial_37_2_quiz_7_part_1.c
```c
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

```
---
---
## **_tutorial_37_2_quiz_7_part_2.c_**
### [**_Click me_**](tutorial_37_2_quiz_7_part_2.c "Clike here to see full file") to see full file of tutorial_37_2_quiz_7_part_2.c
```c
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
struct employee rohan, suresh, ramesh;

void print_details();
int main()
{

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

    print_details();

    return 0;
}

void print_details()
{
    printf("Employee with Employee id %d full name is %s and he likes to code %f hours a day(on an average); by the way his favorite character is %c\n", rohan.id, rohan.full_name, rohan.average_time_code_per_day_in_hours, rohan.favorite_character);

    printf("Employee with Employee id %d full name is %s and he likes to code %f hours a day(on an average); by the way his favorite character is %c\n", ramesh.id, ramesh.full_name, ramesh.average_time_code_per_day_in_hours, ramesh.favorite_character);

    printf("Employee with Employee id %d full name is %s and he likes to code %f hours a day(on an average); by the way his favorite character is %c\n", suresh.id, suresh.full_name, suresh.average_time_code_per_day_in_hours, suresh.favorite_character);
}

```
---
---
## **_tutorial_37_2_quiz_7_part_3.c_**
### [**_Click me_**](tutorial_37_2_quiz_7_part_3.c "Clike here to see full file") to see full file of tutorial_37_2_quiz_7_part_3.c
```c
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
} rohan, suresh, ramesh;

void print_details();
int main()
{

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

    print_details();

    return 0;
}

void print_details()
{
    printf("Employee with Employee id %d full name is %s and he likes to code %f hours a day(on an average); by the way his favorite character is %c\n", rohan.id, rohan.full_name, rohan.average_time_code_per_day_in_hours, rohan.favorite_character);

    printf("Employee with Employee id %d full name is %s and he likes to code %f hours a day(on an average); by the way his favorite character is %c\n", ramesh.id, ramesh.full_name, ramesh.average_time_code_per_day_in_hours, ramesh.favorite_character);

    printf("Employee with Employee id %d full name is %s and he likes to code %f hours a day(on an average); by the way his favorite character is %c\n", suresh.id, suresh.full_name, suresh.average_time_code_per_day_in_hours, suresh.favorite_character);
}

```
---
---
## **_tutorial_38_1.c_**
### [**_Click me_**](tutorial_38_1.c "Clike here to see full file") to see full file of tutorial_38_1.c
```c
// Date 10-06-2021

#include <stdio.h>

int main()
{
    // int typedef;

    typedef unsigned long long ul;

    ul var_1 = 10;
    int var_2 = 10;
    printf("\'sizeof(unsigned long long)\' = %d\n", sizeof(unsigned long long));
    printf("\'sizeof(ul)\' = %d\n", sizeof(ul));
    printf("\'sizeof(var_1)\' = %d\n", sizeof(var_1));
    printf("\'sizeof(var_2)\' = %d\n", sizeof(var_2));
    return 0;
}
```
---
---
## **_tutorial_38_2.c_**
### [**_Click me_**](tutorial_38_2.c "Clike here to see full file") to see full file of tutorial_38_2.c
```c
// Date 10-06-2021

#include <stdio.h>

int main()
{
    // int typedef;

    typedef unsigned long long ul;

    ul var_1 = 10;
    int var_2 = 10;
    printf("\'sizeof(unsigned long long)\' = %d\n", sizeof(unsigned long long));
    printf("\'sizeof(ul)\' = %d\n", sizeof(ul));
    printf("\'sizeof(var_1)\' = %d\n", sizeof(var_1));
    printf("\'sizeof(var_2)\' = %d\n", sizeof(var_2));
    return 0;
}
```
---
---
## **_tutorial_38_3.c_**
### [**_Click me_**](tutorial_38_3.c "Clike here to see full file") to see full file of tutorial_38_3.c
```c
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
```
---
---
## **_tutorial_38_4.c_**
### [**_Click me_**](tutorial_38_4.c "Clike here to see full file") to see full file of tutorial_38_4.c
```c
// Date 10-06-2021

#include <stdio.h>

int main()
{
    typedef int *intPointer;
    intPointer a, b;
    int c = 89;
    a = &c;
    b = &c;

    return 0;
}
```
---
---
## **_tutorial_39_1_1.c_**
### [**_Click me_**](tutorial_39_1_1.c "Clike here to see full file") to see full file of tutorial_39_1_1.c
```c
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
```
---
---
## **_tutorial_39_2_quiz_8.c_**
### [**_Click me_**](tutorial_39_2_quiz_8.c "Clike here to see full file") to see full file of tutorial_39_2_quiz_8.c
```c
// Date 10-06-2021

//* Quiz
//* How much memory does the following union (named test) will take and if it be a structure then how much memory it will take
//! union test
//! {
//!     int a;
//!     float b;
//!     char c;
//! }

#include <stdio.h>

int main()
{
    printf("Answer is 4 for Union because \'sizeof(float)\' is equal to %d\n", sizeof(float));
    printf("Answer is 9 for Struct because \'sizeof(int)+sizeof(float)+sizeof(char)\' is equal to %d\n", sizeof(int) + sizeof(float) + sizeof(char));

    return 0;
}
```
---
---
## **_tutorial_41_exercise_6.c_**
### [**_Click me_**](tutorial_41_exercise_6.c "Clike here to see full file") to see full file of tutorial_41_exercise_6.c
```c
// Date 10-06-2021

#include <stdio.h>
#include <string.h>

void parser(char *str)
{
    short int in_or_not = 4, index = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '<')
        {
            in_or_not = 1;
            continue;
        }
        else if (str[i] == '>')
        {
            in_or_not = 0;
            continue;
        }
        if (in_or_not == 0)
        {
            str[index++] = str[i];
            continue;
        }
    }
    str[index] = '\0';
    while (str[0] == ' ')
    {
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i + 1];
        }
    }

    while (str[strlen(str) - 1] == ' ')
    {
        str[strlen(str) - 1] = '\0';
    }
}

int main()
{
    char string[] = "<h1>             Hi My name is Aman   </h1> ";
    parser(string);

    // puts(string);
    printf("~~%s~~", string);
    return 0;
}
```
---
---
## **_tutorial_42.c_**
### [**_Click me_**](tutorial_42.c "Clike here to see full file") to see full file of tutorial_42.c
```c
// Date 11-06-2021

#include <stdio.h>

int a_static_function()
{
    static int a; //* there is no need to instilize a static variable value because by default it's value is 0
    return a++;
}

int a_non_static_function()
{
    int a = 0;
    return a++;
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("For loop run %2.d times \'a\' = %d\n", i + 1, a_static_function());
    }

    printf("\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("For loop run %2.d times \'a\' = %d\n", i + 1, a_non_static_function());
    }
    // printf("Value of \'a\' = %d\n", a);
    return 0;
}
```
---
---
## **_tutorial_44_exercise_7.c_**
### [**_Click me_**](tutorial_44_exercise_7.c "Clike here to see full file") to see full file of tutorial_44_exercise_7.c
```c
// Date 11-06-2021

//* You manage a travel agency and you want your n drivers to input their following details:
//* 1. Name
//* 2. Driving License No
//* 3. Route
//* 4. Kms
//* Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.
//*
//* Your program should print details of the drivers in a beautiful fashion.
//* User structures.

#include <stdio.h>
#include <string.h>

typedef struct driver_info
{
    char name[20];
    int driving_license_number;
    char main_route[50];
    float average_kilometer_driver_drive_per_day;
} di;

int main()
{

    di d1, d2, d3;

    printf("Enter the name of Driver number 1\n");
    scanf("%s", &d1.name);
    printf("Enter the Driving License number of %s\n", d1.name);
    scanf("%d", &d1.driving_license_number);
    printf("Enter the main route of %s\n", d1.name);
    scanf("%s", &d1.main_route);
    printf("Enter the average kilometer traveled per day by %s\n", d1.name);
    scanf("%f", &d1.average_kilometer_driver_drive_per_day);

    printf("Now Enter the name of Driver number 2\n");
    scanf("%s", &d2.name);
    printf("Enter the Driving License number of %s\n", d2.name);
    scanf("%d", &d2.driving_license_number);
    printf("Enter the main route of %s\n", d2.name);
    scanf("%s", &d2.main_route);
    printf("Enter the average kilometer traveled per day by %s\n", d2.name);
    scanf("%f", &d2.average_kilometer_driver_drive_per_day);

    printf("Now Enter the name of Driver number 2\n");
    scanf("%s", &d3.name);
    printf("Enter the Driving License number of %s\n", d3.name);
    scanf("%d", &d3.driving_license_number);
    printf("Enter the main route of %s\n", d3.name);
    scanf("%s", &d3.main_route);
    printf("Enter the average kilometer traveled per day by %s\n", d3.name);
    scanf("%f", &d3.average_kilometer_driver_drive_per_day);

    printf("\n\n\nName of Driver 1 is %s\n", d1.name);
    printf("%s's Driving License number is %d\n", d1.name, d1.driving_license_number);
    printf("%s's main route is %s\n", d1.name, d1.main_route);
    printf("%s traveles %f Kilometer per day (on an average)\n", d1.name, d1.average_kilometer_driver_drive_per_day);

    printf("\nName of Driver 2 is %s\n", d2.name);
    printf("%s's Driving License number is %d\n", d2.name, d2.driving_license_number);
    printf("%s's main route is %s\n", d2.name, d2.main_route);
    printf("%s traveles %f Kilometer per day (on an average)\n", d2.name, d2.average_kilometer_driver_drive_per_day);

    printf("\nName of Driver 3 is %s\n", d3.name);
    printf("%s's Driving License number is %d\n", d3.name, d3.driving_license_number);
    printf("%s's main route is %s\n", d3.name, d3.main_route);
    printf("%s traveles %f Kilometer per day (on an average)\n", d3.name, d3.average_kilometer_driver_drive_per_day);

    return 0;
}
```
---
---
## **_tutorial_45.c_**
### [**_Click me_**](tutorial_45.c "Clike here to see full file") to see full file of tutorial_45.c
```c
// Date 11-06-2021

#include <stdio.h>

int main()
{
    printf("\nEnter this in your terminal \'size .\\tutorial_45.exe\' to know the size of your program in bytes\n");

    //*    text    data     bss     dec     hex filename
    //*   16976    1652     116   18744    4938 .\tutorial_45.exe

    return 0;
}
```
---
---
## **_tutorial_47_1_1.c_**
### [**_Click me_**](tutorial_47_1_1.c "Clike here to see full file") to see full file of tutorial_47_1_1.c
```c
// Date 11-06-2021

#include <stdio.h>
#include <stdlib.h>

//* Use of malloc
//* Use of malloc
//* Use of malloc
//* Use of malloc
//* Use of malloc
//* Use of malloc
//* Use of malloc
//* Use of malloc
//* Use of malloc
//* Use of malloc

int main()
{
    int *pointer;

    int how_big_memory_you_need;

    printf("In how much big integer array you need to enter values\n");
    scanf("%d", &how_big_memory_you_need);

    pointer = (int *)malloc(how_big_memory_you_need * sizeof(int));

    // printf("%d", pointer);

    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Enter the value of element number %d of your array\n", i);
        scanf("%d", &pointer[i]);
    }

    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Value of element number %d of your array is %d\n", i, pointer[i]);
    }

    return 0;
}
```
---
---
## **_tutorial_47_1_2.c_**
### [**_Click me_**](tutorial_47_1_2.c "Clike here to see full file") to see full file of tutorial_47_1_2.c
```c
// Date 11-06-2021

#include <stdio.h>
#include <stdlib.h>

//* Use of malloc
//* Use of malloc
//* Use of malloc
//* Use of malloc
//* Use of malloc
//* Use of malloc
//* Use of malloc
//* Use of malloc
//* Use of malloc
//* Use of malloc

int main()
{
    int *pointer;

    int how_big_memory_you_need;

    printf("Of how much big integer array you need to see garbage values\n");
    scanf("%d", &how_big_memory_you_need);

    pointer = (int *)malloc(how_big_memory_you_need * sizeof(int));

    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Garbage value of element number %d of array is %d\n", i, pointer[i]);
    }

    return 0;
}
```
---
---
## **_tutorial_47_2_1.c_**
### [**_Click me_**](tutorial_47_2_1.c "Clike here to see full file") to see full file of tutorial_47_2_1.c
```c
// Date 11-06-2021

#include <stdio.h>
#include <stdlib.h>

//* Use of calloc
//* Use of calloc
//* Use of calloc
//* Use of calloc
//* Use of calloc
//* Use of calloc
//* Use of calloc
//* Use of calloc
//* Use of calloc
//* Use of calloc

int main()
{
    int *pointer;

    int how_big_memory_you_need;

    printf("In how much big integer array you need to enter values\n");
    scanf("%d", &how_big_memory_you_need);

    pointer = (int *)calloc(how_big_memory_you_need, sizeof(int));
    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Enter the value of element number %d of your array\n", i);
        scanf("%d", &pointer[i]);
    }
    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Garbage value of element number %d of array is %d\n", i, pointer[i]);
    }

    return 0;
}
```
---
---
## **_tutorial_47_2_2.c_**
### [**_Click me_**](tutorial_47_2_2.c "Clike here to see full file") to see full file of tutorial_47_2_2.c
```c
// Date 11-06-2021

#include <stdio.h>
#include <stdlib.h>

//* Use of calloc
//* Use of calloc
//* Use of calloc
//* Use of calloc
//* Use of calloc
//* Use of calloc
//* Use of calloc
//* Use of calloc
//* Use of calloc
//* Use of calloc

int main()
{
    int *pointer;

    int how_big_memory_you_need;

    printf("Note: In calloc the is no garbage value each and every value of calloc is assigned as 0\n");
    printf("Of how much big integer array you need to see 0 values\n");
    scanf("%d", &how_big_memory_you_need);

    pointer = (int *)calloc(how_big_memory_you_need, sizeof(int));

    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Garbage value of element number %d of array is %d\n", i, pointer[i]);
    }

    return 0;
}
```
---
---
## **_tutorial_47_3.c_**
### [**_Click me_**](tutorial_47_3.c "Clike here to see full file") to see full file of tutorial_47_3.c
```c
// Date 11-06-2021

#include <stdio.h>
#include <stdlib.h>

//* Use of realloc
//* Use of realloc
//* Use of realloc
//* Use of realloc
//* Use of realloc
//* Use of realloc
//* Use of realloc
//* Use of realloc
//* Use of realloc
//* Use of realloc

int main()
{
    int *pointer;

    int how_big_memory_you_need;

    printf("In how much big integer array you need to enter values (using malloc)\n");
    scanf("%d", &how_big_memory_you_need);

    pointer = (int *)malloc(how_big_memory_you_need * sizeof(int));

    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Enter the value of element number %d of your array\n", i);
        scanf("%d", &pointer[i]);
    }

    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Value of element number %d of your array is %d\n", i, pointer[i]);
    }

    printf("\n\nNow how much big integer array you need to re-allocate (using realloc)\n");
    scanf("%d", &how_big_memory_you_need);

    pointer = (int *)realloc(pointer, how_big_memory_you_need * sizeof(int));

    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Enter the value of re-allocated array\'s element number %d of your array\n", i);
        scanf("%d", &pointer[i]);
    }

    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Value of element number %d of your array is %d\n", i, pointer[i]);
    }

    return 0;
}
```
---
---
## **_tutorial_47_4.c_**
### [**_Click me_**](tutorial_47_4.c "Clike here to see full file") to see full file of tutorial_47_4.c
```c
// Date 11-06-2021

#include <stdio.h>
#include <stdlib.h>

//* Use of free
//* Use of free
//* Use of free
//* Use of free
//* Use of free
//* Use of free
//* Use of free
//* Use of free
//* Use of free
//* Use of free

int main()
{
    int *pointer;

    int how_big_memory_you_need;

    printf("In how much big integer array you need to enter values and experiment with (free)\n");
    scanf("%d", &how_big_memory_you_need);

    pointer = (int *)malloc(how_big_memory_you_need * sizeof(int));

    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Enter the value of element number %d of your array\n", i);
        scanf("%d", &pointer[i]);
    }

    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Value of element number %d of your array is %d\n", i, pointer[i]);
    }

    printf("\n\n");
    free(pointer);
    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Now after free() function; value of element number %d of your array is %d (%d is a garbage value because it\'s main value is been freed using free() function)\n", i, pointer[i], pointer[i]);
    }

    return 0;
}
```
---
---
## **_tutorial_47_5_quiz_9.c_**
### [**_Click me_**](tutorial_47_5_quiz_9.c "Clike here to see full file") to see full file of tutorial_47_5_quiz_9.c
```c
// Date 11-06-2021

#include <stdio.h>
//* Quiz
//* Use free() function to free up the memory in between the program

int main()
{
    int *pointer;

    int how_big_memory_you_need;

    printf("In how much big integer array you need to enter values\n");
    scanf("%d", &how_big_memory_you_need);

    pointer = (int *)malloc(how_big_memory_you_need * sizeof(int));

    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Enter the value of element number %d of your array\n", i);
        scanf("%d", &pointer[i]);
    }

    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Value of element number %d of your array is %d\n", i, pointer[i]);
    }

    //* Use of free() is here
    //* Use of free() is here
    //* Use of free() is here
    //* Use of free() is here
    //* Use of free() is here
    //* Use of free() is here
    //* Use of free() is here
    //* Use of free() is here
    //* Use of free() is here
    //* Use of free() is here
    free(pointer);
    //* Use of free() is here
    //* Use of free() is here
    //* Use of free() is here
    //* Use of free() is here
    //* Use of free() is here
    //* Use of free() is here
    //* Use of free() is here
    //* Use of free() is here
    //* Use of free() is here
    //* Use of free() is here

    printf("Now it's second time; how much big integer array you need to enter values\n");
    scanf("%d", &how_big_memory_you_need);

    pointer = (int *)malloc(how_big_memory_you_need * sizeof(int));

    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Enter the value of element number %d of your array\n", i);
        scanf("%d", &pointer[i]);
    }

    for (int i = 0; i < how_big_memory_you_need; i++)
    {
        printf("Value of element number %d of your array is %d\n", i, pointer[i]);
    }

    return 0;
}
```
---
---
## **_tutorial_48_exercise_8.c_**
### [**_Click me_**](tutorial_48_exercise_8.c "Clike here to see full file") to see full file of tutorial_48_exercise_8.c
```c
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
```
---
---
## **_tutorial_49_1.c_**
### [**_Click me_**](tutorial_49_1.c "Clike here to see full file") to see full file of tutorial_49_1.c
```c
// Date 12-06-2021

//* Use of Automatic Variable
//* Use of Automatic Variable
//* Use of Automatic Variable
//* Use of Automatic Variable
//* Use of Automatic Variable
//* Use of Automatic Variable
//* Use of Automatic Variable
//* Use of Automatic Variable
//* Use of Automatic Variable
//* Use of Automatic Variable

int function_sum_with_auto(int a, int b)
{
    auto int sum = a + b;
    return sum;
}
int function_sum_without_auto(int a, int b)
{
    int sum = a + b;
    return sum;
}

#include <stdio.h>

int main()
{
    printf("Sum of \'a\' and \'b\' (with declaring auto Variable) is %d \n", function_sum_with_auto(3, 2));
    printf("Sum of \'a\' and \'b\' (without declaring auto Variable) is %d \n", function_sum_without_auto(3, 2));

    return 0;
}
```
---
---
## **_tutorial_49_2_1.c_**
### [**_Click me_**](tutorial_49_2_1.c "Clike here to see full file") to see full file of tutorial_49_2_1.c
```c
// Date 12-06-2021

//* Use of External Variable(from program)
//* Use of External Variable(from program)
//* Use of External Variable(from program)
//* Use of External Variable(from program)
//* Use of External Variable(from program)
//* Use of External Variable(from program)
//* Use of External Variable(from program)
//* Use of External Variable(from program)
//* Use of External Variable(from program)
//* Use of External Variable(from program)

int external_variable_from_program = 5;

int sum(int a, int b)
{
    int sum = external_variable_from_program + a + b;
    return sum;
}

#include <stdio.h>

int main()
{
    external_variable_from_program = sum(3, 2);
    printf("Value of \'external_variable_from_program\' = %d\n", external_variable_from_program);
    return 0;
}
```
---
---
## **_tutorial_49_2_2.c_**
### [**_Click me_**](tutorial_49_2_2.c "Clike here to see full file") to see full file of tutorial_49_2_2.c
```c
// Date 12-06-2021

#include <stdio.h>
#include "tutorial_49_2_2_file_with_external_variable.c"

//* Use of External Variable(from outside of the program)
//* Use of External Variable(from outside of the program)
//* Use of External Variable(from outside of the program)
//* Use of External Variable(from outside of the program)
//* Use of External Variable(from outside of the program)
//* Use of External Variable(from outside of the program)
//* Use of External Variable(from outside of the program)
//* Use of External Variable(from outside of the program)
//* Use of External Variable(from outside of the program)
//* Use of External Variable(from outside of the program)

int sum(int a, int b)
{
    int sum = external_variable_from_outside_of_program + a + b;
    return sum;
}

int main()
{
    //* external_variable_from_outside_of_program is imported from file "tutorial_49_2_2_file_with_external_variable.c"
    //* external_variable_from_outside_of_program is imported from file "tutorial_49_2_2_file_with_external_variable.c"
    //* external_variable_from_outside_of_program is imported from file "tutorial_49_2_2_file_with_external_variable.c"
    //* external_variable_from_outside_of_program is imported from file "tutorial_49_2_2_file_with_external_variable.c"
    //* external_variable_from_outside_of_program is imported from file "tutorial_49_2_2_file_with_external_variable.c"
    //* external_variable_from_outside_of_program is imported from file "tutorial_49_2_2_file_with_external_variable.c"
    //* external_variable_from_outside_of_program is imported from file "tutorial_49_2_2_file_with_external_variable.c"
    //* external_variable_from_outside_of_program is imported from file "tutorial_49_2_2_file_with_external_variable.c"
    //* external_variable_from_outside_of_program is imported from file "tutorial_49_2_2_file_with_external_variable.c"
    //* external_variable_from_outside_of_program is imported from file "tutorial_49_2_2_file_with_external_variable.c"
    external_variable_from_outside_of_program = sum(3, 2);
    printf("Value of \'external_variable_from_outside_of_program\' = %d\n", external_variable_from_outside_of_program);
    return 0;
}
```
---
---
## **_tutorial_49_2_2_file_with_external_variable.c_**
### [**_Click me_**](tutorial_49_2_2_file_with_external_variable.c "Clike here to see full file") to see full file of tutorial_49_2_2_file_with_external_variable.c
```c
// Date 12-06-2021

//* it is file with external variable for "tutorial_49_2_2.c"

int external_variable_from_outside_of_program = 5;
```
---
---
## **_tutorial_49_3.c_**
### [**_Click me_**](tutorial_49_3.c "Clike here to see full file") to see full file of tutorial_49_3.c
```c
// Date 12-06-2021

//* Use of Static Variable
//* Use of Static Variable
//* Use of Static Variable
//* Use of Static Variable
//* Use of Static Variable
//* Use of Static Variable
//* Use of Static Variable
//* Use of Static Variable
//* Use of Static Variable
//* Use of Static Variable

int static_function_sum()
{
    static int sum = 1;
    return sum++;
}

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        printf("Value of \'sum\' by calling \'static_function_sum()\' function %3.d time = %3.d\n", i, static_function_sum());
    }

    return 0;
}
```
---
---
## **_tutorial_49_4.c_**
### [**_Click me_**](tutorial_49_4.c "Clike here to see full file") to see full file of tutorial_49_4.c
```c
// Date 12-06-2021

//* Use of Rergister Variable
//* Use of Rergister Variable
//* Use of Rergister Variable
//* Use of Rergister Variable
//* Use of Rergister Variable
//* Use of Rergister Variable
//* Use of Rergister Variable
//* Use of Rergister Variable
//* Use of Rergister Variable
//* Use of Rergister Variable

#include <stdio.h>

int main()
{
    register int register_variable = 1;
    for (int i = 1; i <= 100; i++)
    {
        printf("Value of \'register_variable\' is = %3.d\n", register_variable++);
    }

    return 0;
}
```
---
---
## **_tutorial_50_1.c_**
### [**_Click me_**](tutorial_50_1.c "Clike here to see full file") to see full file of tutorial_50_1.c
```c
// Date 11-06-2021

#include <stdio.h>

int main()
{
    char a, b, c;
    printf("Enter the value of \'a\'\n");
    scanf("%c", &a);
    printf("Enter the value of \'b\'\n");
    scanf("%c", &b);
    printf("Enter the value of \'c\'\n");
    scanf("%c", &c);

    printf("Value of \'a\' = %c\n", a);
    printf("Value of \'b\' = %c\n", b);
    printf("Value of \'c\' = %c\n", c);
    return 0;
    //* Now when you will run this script you will see some strange behavior of program to solve this strange behavior go and see "tutorial_50_2.c" (use "getchar()" function)
    //* Now when you will run this script you will see some strange behavior of program to solve this strange behavior go and see "tutorial_50_2.c" (use "getchar()" function)
    //* Now when you will run this script you will see some strange behavior of program to solve this strange behavior go and see "tutorial_50_2.c" (use "getchar()" function)
    //* Now when you will run this script you will see some strange behavior of program to solve this strange behavior go and see "tutorial_50_2.c" (use "getchar()" function)
    //* Now when you will run this script you will see some strange behavior of program to solve this strange behavior go and see "tutorial_50_2.c" (use "getchar()" function)
    //* Now when you will run this script you will see some strange behavior of program to solve this strange behavior go and see "tutorial_50_2.c" (use "getchar()" function)
    //* Now when you will run this script you will see some strange behavior of program to solve this strange behavior go and see "tutorial_50_2.c" (use "getchar()" function)
    //* Now when you will run this script you will see some strange behavior of program to solve this strange behavior go and see "tutorial_50_2.c" (use "getchar()" function)
    //* Now when you will run this script you will see some strange behavior of program to solve this strange behavior go and see "tutorial_50_2.c" (use "getchar()" function)
    //* Now when you will run this script you will see some strange behavior of program to solve this strange behavior go and see "tutorial_50_2.c" (use "getchar()" function)
}
```
---
---
## **_tutorial_50_2.c_**
### [**_Click me_**](tutorial_50_2.c "Clike here to see full file") to see full file of tutorial_50_2.c
```c
// Date 11-06-2021

#include <stdio.h>

int main()
{
    char a, b, c;
    printf("Enter the value of \'a\'\n");
    scanf("%c", &a);
    getchar();
    printf("Enter the value of \'b\'\n");
    scanf("%c", &b);
    getchar();
    printf("Enter the value of \'c\'\n");
    scanf("%c", &c);

    printf("Value of \'a\' = %c\n", a);
    printf("Value of \'b\' = %c\n", b);
    printf("Value of \'c\' = %c\n", c);
    return 0;
    //* This script is written to solve some strange behavior of program when taking input of diffrent char variables one after the other that strange behavior is shown in "tutorial_50_1.c"
    //* This script is written to solve some strange behavior of program when taking input of diffrent char variables one after the other that strange behavior is shown in "tutorial_50_1.c"
    //* This script is written to solve some strange behavior of program when taking input of diffrent char variables one after the other that strange behavior is shown in "tutorial_50_1.c"
    //* This script is written to solve some strange behavior of program when taking input of diffrent char variables one after the other that strange behavior is shown in "tutorial_50_1.c"
    //* This script is written to solve some strange behavior of program when taking input of diffrent char variables one after the other that strange behavior is shown in "tutorial_50_1.c"
    //* This script is written to solve some strange behavior of program when taking input of diffrent char variables one after the other that strange behavior is shown in "tutorial_50_1.c"
    //* This script is written to solve some strange behavior of program when taking input of diffrent char variables one after the other that strange behavior is shown in "tutorial_50_1.c"
    //* This script is written to solve some strange behavior of program when taking input of diffrent char variables one after the other that strange behavior is shown in "tutorial_50_1.c"
    //* This script is written to solve some strange behavior of program when taking input of diffrent char variables one after the other that strange behavior is shown in "tutorial_50_1.c"
    //* This script is written to solve some strange behavior of program when taking input of diffrent char variables one after the other that strange behavior is shown in "tutorial_50_1.c"
}
```
---
---
## **_tutorial_51_exercise_9.c_**
### [**_Click me_**](tutorial_51_exercise_9.c "Clike here to see full file") to see full file of tutorial_51_exercise_9.c
```c
// Date 12-06-2021

//* Create Rock, Paper & Scissors Game
//* Player 1: rock
//* Player 2 (computer): scissors -->player 1 gets 1 point

//* rock vs scissors - rock wins
//* paper vs scissors - scissors wins
//* paper vs rock - paper wins
//* Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
//* Notes: You have to display name of the player during the game. Take users name as an input from the user.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int user_turn();
int bot_choice();
// int string_lower();

char user_choice = 0;
int computer_choice = 0;
char computer_choice_options[3] = {'r', 'p', 's'};

int main()
{
    char user_name[20];
    printf("Please enter your name to play game with Bot\n");
    gets(user_name);
    int play_again_or_not;
    int score_of_user_and_bot[2] = {0, 0};
    //* score_of_user_and_bot[0] is for user
    //* score_of_user_and_bot[1] is for bot
    int chances_user_need_to_play;

    printf("So, \"%s\" how many times you need to play with a Computer:\n", user_name);
    scanf("%d", &chances_user_need_to_play);
    getchar();

    for (int i = 1; i <= chances_user_need_to_play; i++)
    {
        user_turn();
        if (user_choice == 'r' && bot_choice(i) == 'p')
        {
            score_of_user_and_bot[1] += 1;
            printf("You lose this turn\nYour score is %d\nBot score is %d\n%d chance left\n\n", score_of_user_and_bot[0], score_of_user_and_bot[1], chances_user_need_to_play - i);
        }
        else if (user_choice == 'r' && bot_choice(i) == 's')
        {
            score_of_user_and_bot[0] += 1;
            printf("You won this turn\nYour score is %d\nBot score is %d\n%d chance left\n\n", score_of_user_and_bot[0], score_of_user_and_bot[1], chances_user_need_to_play - i);
        }
        else if (user_choice == 'r' && bot_choice(i) == 'r')
        {
            printf("This turn is draw because both playes choose same thing\nYour score is %d\nBot score is %d\n%d chance left\n\n", score_of_user_and_bot[0], score_of_user_and_bot[1], chances_user_need_to_play - i);
        }
        else if (user_choice == 'p' && bot_choice(i) == 'r')
        {
            score_of_user_and_bot[0] += 1;
            printf("You won this turn\nYour score is %d\nBot score is %d\n%d chance left\n\n", score_of_user_and_bot[0], score_of_user_and_bot[1], chances_user_need_to_play - i);
        }
        else if (user_choice == 'p' && bot_choice(i) == 'p')
        {
            printf("This turn is draw because both playes choose same thing\nYour score is %d\nBot score is %d\n%d chance left\n\n", score_of_user_and_bot[0], score_of_user_and_bot[1], chances_user_need_to_play - i);
        }
        else if (user_choice == 'p' && bot_choice(i) == 's')
        {
            score_of_user_and_bot[1] += 1;
            printf("You lose this turn\nYour score is %d\nBot score is %d\n%d chance left\n\n", score_of_user_and_bot[0], score_of_user_and_bot[1], chances_user_need_to_play - i);
        }
        else if (user_choice == 's' && bot_choice(i) == 'r')
        {
            score_of_user_and_bot[1] += 1;
            printf("You lose this turn\nYour score is %d\nBot score is %d\n%d chance left\n\n", score_of_user_and_bot[0], score_of_user_and_bot[1], chances_user_need_to_play - i);
        }
        else if (user_choice == 's' && bot_choice(i) == 'p')
        {
            score_of_user_and_bot[0] += 1;
            printf("You won this turn\nYour score is %d\nBot score is %d\n%d chance left\n\n", score_of_user_and_bot[0], score_of_user_and_bot[1], chances_user_need_to_play - i);
        }
        else if (user_choice == 's' && bot_choice(i) == 's')
        {
            printf("This turn is draw because both playes choose same thing\nYour score is %d\nBot score is %d\n%d chance left\n\n", score_of_user_and_bot[0], score_of_user_and_bot[1], chances_user_need_to_play - i);
        }
    }
    if (score_of_user_and_bot[0] > score_of_user_and_bot[1])
    {
        //* It means that user won the match
        printf("Congraulations! You won the match by %d points\n%s\'s score: %d\nBot\'s score: %d\n", score_of_user_and_bot[0] - score_of_user_and_bot[1], user_name, score_of_user_and_bot[0], score_of_user_and_bot[1]);
    }
    else if (score_of_user_and_bot[1] > score_of_user_and_bot[0])
    {
        //* It means that bot won the match
        printf("Sorry! You lose the match by %d points\n%s\'s score: %d\nBot\'s score: %d\n", score_of_user_and_bot[1] - score_of_user_and_bot[0], user_name, score_of_user_and_bot[0], score_of_user_and_bot[1]);
    }
    else if (score_of_user_and_bot[1] == score_of_user_and_bot[0])
    {
        //* It means that the match is drawen
        printf("Unfortunately! Match has considered draw; as both players score is same i.e. %d\n", score_of_user_and_bot[0]);
    }

switch_play_again_or_not:
    printf("\nPress 0 to play the game again\nPress 1 to exit the game again\n");
    scanf("%d", play_again_or_not);
    getchar();
    switch (play_again_or_not)
    {
    case 0:
        printf("\n\n\n\n\n");
        main();
        break;
    case 1:
        exit(1);

    default:
        printf("Please chose a valid option\n");
        goto switch_play_again_or_not;
        break;
    }

    return 0;
}

int bot_choice(int n)
{
    srand(time(NULL) * n); //srand takes seed as an input and is defined inside stdlib.h
    return computer_choice_options[rand() % 3];
}

int user_turn()
{
    printf("Press R for Rock\nPress P for Paper\nPress S for Scissor\n");
    scanf("%c", &user_choice);
    getchar();
    tolower(user_choice);
    if (user_choice != 'r' && user_choice != 'p' && user_choice != 's')
    {
        printf("Please enter values in S, W, G only! Now you need to enter values again\n\n");
        user_turn();
    }
}

```
---
---
## **_tutorial_52_1.c_**
### [**_Click me_**](tutorial_52_1.c "Clike here to see full file") to see full file of tutorial_52_1.c
```c
// Date 12-06-2021

#include <stdio.h>

int main()
{
    void *pointer;
    printf("The value of pointer without type casting is %d\n", pointer);
    printf("The value of pointer with type casting is %d\n", (int *)pointer);
    printf("The value on pointer with type casting is %d\n", *((int *)pointer));
    printf("The value on pointer with type casting is %f\n", *((float *)pointer));
    printf("The value on pointer with type casting is %c\n", *((char *)pointer));
    return 0;
}
```
---
---
## **_tutorial_52_2.c_**
### [**_Click me_**](tutorial_52_2.c "Clike here to see full file") to see full file of tutorial_52_2.c
```c
// Date 12-06-2021

#include <stdio.h>

int main()
{
    int a = 345;
    float b = 8.3;
    void *pointer;
    pointer = &b;
    printf("The value of b is %f\n", *((float *)pointer));
    printf("The address of b is %d\n", (float *)pointer);
    pointer = &a;
    printf("The value of a is %d\n", *((int *)pointer));
    printf("The address of a is %d\n", (int *)pointer);

    return 0;
}
```
---
---
## **_tutorial_53.c_**
### [**_Click me_**](tutorial_53.c "Clike here to see full file") to see full file of tutorial_53.c
```c
// Date 13-06-2021

#include <stdio.h>

int main()
{
    int a = 34;
    int *ptr = NULL;
    if (ptr != NULL)
        printf("The address of a is %d\n", ptr);

    else
        printf("The pointer is a null pointer and cannot be dereferenced");

    return 0;
}
```
---
---
## **_tutorial_54_1.c_**
### [**_Click me_**](tutorial_54_1.c "Clike here to see full file") to see full file of tutorial_54_1.c
```c
// Date 13-06-2021

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //* Case 1: De allocation of a memory block
    int *pointer = (int *)malloc(7 * sizeof(int));
    pointer[0] = 34;
    pointer[1] = 36;
    pointer[2] = 64;
    pointer[3] = 5;
    for (int i = 0; i <= 3; i++)
        printf("Value of \'pointer[%d]\' = %d\n", i, pointer[i]);

    printf("\nNow after converting pointer as a dangling pointer\n");
    free(pointer); //* pointer is now a dangling pointer

    for (int i = 0; i <= 3; i++)
        printf("Value of dangeling \'pointer[%d]\' = %d\n", i, pointer[i]);

    printf("\nNow after converting pointer as a dangling pointer");
    return 0;
}
```
---
---
## **_tutorial_54_2.c_**
### [**_Click me_**](tutorial_54_2.c "Clike here to see full file") to see full file of tutorial_54_2.c
```c
// Date 13-06-2021

#include <stdio.h>

int *function_for_dangling()
{
    int a, b, sum;
    a = 785;
    b = 17;
    sum = a + b;
    return &sum;
}

int main()
{
    //* Case 2: Function returning local variable address

    int *dangeling_pointer = function_for_dangling(); //* dangeling_pointer is now a dangling pointer

    printf("Value of \'dangeling_pointer\' = %d\n", dangeling_pointer);

    return 0;
}
```
---
---
## **_tutorial_54_3.c_**
### [**_Click me_**](tutorial_54_3.c "Clike here to see full file") to see full file of tutorial_54_3.c
```c
// Date 13-06-2021

#include <stdio.h>

int main()
{
    //* Case 3: If a variable goes out of scope
    {
        int *dangeling_pointer;
        int a = 12;

        dangeling_pointer = &a;
    }
    //* Here variable a goes out of scope which means dangeling_pointer is pointing to a location which is freed and hence dangeling_pointer is now a dangling pointer

    // printf("Value of \'*dangeling_pointer\' = %d\n", *dangeling_pointer);

    //* So because dangeling_pointer is now a dangling pointer (because of out of scope below line will give an error)
    //! printf("Value of \'*dangeling_pointer\' = %d\n", *dangeling_pointer);
    //* So because dangeling_pointer is now a dangling pointer (because of out of scope above line will give an error)

    return 0;
}
```
---
---
## **_tutorial_55.c_**
### [**_Click me_**](tutorial_55.c "Clike here to see full file") to see full file of tutorial_55.c
```c
// Date 13-06-2021

#include <stdio.h>

int main()
{
    int *wild_pointer;
    printf("Value of \'wild_pointer\' = %d\n", wild_pointer);
    printf("Value at \'*wild_pointer\' = %d\n", *wild_pointer);
    return 0;
}
```
---
---
## **_tutorial_57_exercise_10.c_**
### [**_Click me_**](tutorial_57_exercise_10.c "Clike here to see full file") to see full file of tutorial_57_exercise_10.c
```c
// Date 13-06-2021

//* This program asks the user to enter the size of rows and columns of two matrices (a and b). Both of the matrices are 2D array. Your task is to input these 2D arrays from the user, and then your program will display the results. Following is the condition to multiply the two matrices.

//* To multiply two matrices, the number of columns of the first matrix should be equal to the number of rows of the second matrix.

//* When this condition satisfies, your program should return the multiplied matrix result. However, if this condition does not satisfy, then your program should display a message to end-user that it cannot perform the multiplication of matrices.

#include <stdio.h>
#include <stdlib.h>

//* Not Done

//todo int rows_of_matrix_one;
//todo int columns_of_matrix_one;
//todo int rows_of_matrix_two;
//todo int columns_of_matrix_two;
//todo int *pointer_of_matrix_one;

//todo int matrix_input_taker();
//todo int matrix_final_value_taker();
//todo int matrix_value_printer();

int main()
{
    int m, n, sum = 0;
    int matrix_a[3][4], matrix_b[4][2], output_matrix[3][2];
    printf("First Enter elements of your first matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            printf("Please enter the value of row %d and column %d your matrix \n", i + 1, j + 1);
            scanf("%d", &matrix_a[i][j]);
        }
    }

    printf("Now Enter elements of your second matrix\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            printf("Please enter the value of row %d and column %d your matrix \n", i + 1, j + 1);
            scanf("%d", &matrix_b[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // Calculate the output_matrix
            for (int k = 0; k < 4; k++)
            {
                sum += matrix_a[i][k] * matrix_b[k][j];
            }
            output_matrix[i][j] = sum;
            sum = 0;
        }
    }

    printf("\n\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("[");
        for (int j = 0; j < 4; j++)
        {
            printf("%5.d,", matrix_a[i][j]);
        }
        printf("]\n");
    }

    return 0;
}

```
---
---
## **_tutorial_59_1.c_**
### [**_Click me_**](tutorial_59_1.c "Clike here to see full file") to see full file of tutorial_59_1.c
```c
// Date 13-06-2021

#include <stdio.h>
#include "tutorial_59_1_function_file.c"

int main()
{
    print_i(10000);

    return 0;
}
```
---
---
## **_tutorial_59_1_function_file.c_**
### [**_Click me_**](tutorial_59_1_function_file.c "Clike here to see full file") to see full file of tutorial_59_1_function_file.c
```c
// Date 13-06-2021
//* This is a function file for "tutorial_59_1.c"
#include <stdio.h>

void print_i(int num)
{
    for (int i = 1; i <= num; i++)
    {
        printf("Value of \'i\' = %5.d\n", i);
    }
}
```
---
---
## **_tutorial_59_2.c_**
### [**_Click me_**](tutorial_59_2.c "Clike here to see full file") to see full file of tutorial_59_2.c
```c
// Date 13-06-2021

#include <stdio.h>
#define pi 3.142857f

int main()
{
    printf("%f", pi);

    return 0;
}
```
---
---
## **_tutorial_59_3.c_**
### [**_Click me_**](tutorial_59_3.c "Clike here to see full file") to see full file of tutorial_59_3.c
```c
// Date 13-06-2021

#include <stdio.h>
#define square(num) num *num

int main()
{
    int num = 4;
    printf("Square of %d is %d", num, square(num));

    return 0;
}
```
---
---
## **_tutorial_60_1.c_**
### [**_Click me_**](tutorial_60_1.c "Clike here to see full file") to see full file of tutorial_60_1.c
```c

```
---
---
