// Date 08-07-2021

#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    char string[100];
    ptr = fopen("tutorial_64.txt", "r");
    fscanf(ptr, "%s", string);
    printf("The content of the file is the following --> %s", string);
    fclose(ptr);

    FILE *ptr_2 = NULL;
    char string_2[100] = "This is a content of my String!\n";
    ptr_2 = fopen("tutorial_64.txt", "a");
    fprintf(ptr_2, "%s", string_2);

    return 0;
}