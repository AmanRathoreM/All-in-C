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