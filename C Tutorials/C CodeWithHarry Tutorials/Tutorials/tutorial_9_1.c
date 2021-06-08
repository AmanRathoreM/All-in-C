// Date 06-06-2021

#include <stdio.h>

int main()
{
    int a = 99;
    float b = 99.99;
    printf("int A with %%d = %d\nfloat B with %%f = %f\nfloat B with %%0.4f = %.4f\nfloat B with %%7.4f = %7.4f\nfloat B with %%8.4f = %8.4f\nfloat B with %%10.4f = %10.4f\t%%10.4f will print float B in the space of 10 characters starting left-to-right\nfloat B with %%-20.4f = %-20.4fs\t%%10.4f will print float B in the space of 20 characters starting right-to-left", a, b, b, b, b, b, b);

    return 0;
}