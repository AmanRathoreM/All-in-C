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