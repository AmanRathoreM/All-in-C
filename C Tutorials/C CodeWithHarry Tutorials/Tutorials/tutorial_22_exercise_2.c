// Date 08-06-2021

//* Make a program which asks user to convert which thing from the following
//* kms to miles
//* inches to foot
//* cms to inches
//* pounds to kg
//* inches to meters

#include <stdio.h>

int main()
{
    int choice;
    float conversion_value;
start:
    printf("Please select what you want to convert\nEnter 1 for Kilometer to Miles\nEnter 2 for Inches to Foot\nEnter 3 for Centimeter to Inches\nEnter 4 for Pounds to Kilogram\nEnter 5 for Inches to Meters\n");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Please enter Kilometer\n");
        scanf("%f", &conversion_value);
        printf("%f Kilometer equals to %f Miles\n", conversion_value, conversion_value * (float)0.621371);
        break;
    case 2:
        printf("Please enter Inches\n");
        scanf("%f", &conversion_value);
        printf("%f Inches equals to %f Foot\n", conversion_value, conversion_value * (float)0.0833333);
        break;
    case 3:
        printf("Please enter Centimeter\n");
        scanf("%f", &conversion_value);
        printf("%f Centimeter equals to %f Inches\n", conversion_value, conversion_value * (float)0.393701);
        break;
    case 4:
        printf("Please enter Pounds\n");
        scanf("%f", &conversion_value);
        printf("%f Pounds equals to %f Kilogram\n", conversion_value, conversion_value * (float)0.453592);
        break;
    case 5:
        printf("Please enter Inches\n");
        scanf("%f", &conversion_value);
        printf("%f Inches equals to %f Meter\n", conversion_value, conversion_value * (float)0.0254);
        break;

    default:
        printf("Please select a valid option\n");
        goto start;
    }
    return 0;
}