#include <stdio.h>
#include "employees.h"

int main(void)
{
    int choice;

    do
    {
        printf("\n=========================\n");
        printf("MFMS WEEK 11\n");
        printf("=========================\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Save Employees\n");
        printf("4. Load Employees\n");
        printf("0. Exit\n");

        printf("Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                saveEmployees();
                break;

            case 4:
                loadEmployees();
                break;

            case 0:
                printf("Goodbye\n");
                break;

            default:
                printf("Invalid Option\n");
        }

    } while(choice != 0);

    return 0;
}