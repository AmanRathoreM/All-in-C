// Date 11-06-2021

//* You manage a travel agency and you want your n drivers to input their following details:
//* 1. Name
//* 2. Driving License No
//* 3. Route
//* 4. Kms
//* Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.
//*
//* Your program should print details of the drivers in a beautiful fashion.
//* User structures.

#include <stdio.h>
#include <string.h>

typedef struct driver_info
{
    char name[20];
    int driving_license_number;
    char main_route[50];
    float average_kilometer_driver_drive_per_day;
} di;

int main()
{

    di d1, d2, d3;

    printf("Enter the name of Driver number 1\n");
    scanf("%s", &d1.name);
    printf("Enter the Driving License number of %s\n", d1.name);
    scanf("%d", &d1.driving_license_number);
    printf("Enter the main route of %s\n", d1.name);
    scanf("%s", &d1.main_route);
    printf("Enter the average kilometer traveled per day by %s\n", d1.name);
    scanf("%f", &d1.average_kilometer_driver_drive_per_day);

    printf("Now Enter the name of Driver number 2\n");
    scanf("%s", &d2.name);
    printf("Enter the Driving License number of %s\n", d2.name);
    scanf("%d", &d2.driving_license_number);
    printf("Enter the main route of %s\n", d2.name);
    scanf("%s", &d2.main_route);
    printf("Enter the average kilometer traveled per day by %s\n", d2.name);
    scanf("%f", &d2.average_kilometer_driver_drive_per_day);

    printf("Now Enter the name of Driver number 2\n");
    scanf("%s", &d3.name);
    printf("Enter the Driving License number of %s\n", d3.name);
    scanf("%d", &d3.driving_license_number);
    printf("Enter the main route of %s\n", d3.name);
    scanf("%s", &d3.main_route);
    printf("Enter the average kilometer traveled per day by %s\n", d3.name);
    scanf("%f", &d3.average_kilometer_driver_drive_per_day);

    printf("\n\n\nName of Driver 1 is %s\n", d1.name);
    printf("%s's Driving License number is %d\n", d1.name, d1.driving_license_number);
    printf("%s's main route is %s\n", d1.name, d1.main_route);
    printf("%s traveles %f Kilometer per day (on an average)\n", d1.name, d1.average_kilometer_driver_drive_per_day);

    printf("\nName of Driver 2 is %s\n", d2.name);
    printf("%s's Driving License number is %d\n", d2.name, d2.driving_license_number);
    printf("%s's main route is %s\n", d2.name, d2.main_route);
    printf("%s traveles %f Kilometer per day (on an average)\n", d2.name, d2.average_kilometer_driver_drive_per_day);

    printf("\nName of Driver 3 is %s\n", d3.name);
    printf("%s's Driving License number is %d\n", d3.name, d3.driving_license_number);
    printf("%s's main route is %s\n", d3.name, d3.main_route);
    printf("%s traveles %f Kilometer per day (on an average)\n", d3.name, d3.average_kilometer_driver_drive_per_day);

    return 0;
}