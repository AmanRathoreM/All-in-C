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