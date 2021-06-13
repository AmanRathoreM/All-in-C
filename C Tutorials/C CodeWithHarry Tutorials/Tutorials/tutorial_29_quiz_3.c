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