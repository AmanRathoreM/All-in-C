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