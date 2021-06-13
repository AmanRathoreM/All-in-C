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
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same
    //* Note: *(&array[n]) and *(array + n) are same

    return 0;
}