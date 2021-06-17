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