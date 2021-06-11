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