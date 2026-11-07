#include <stdio.h>
#include "employees.h"

int main()
{
    int choice;

    do
    {
        printf("\n========================\n");
        printf("MFMS MENU\n");
        printf("========================\n");
        printf("1. Add Employee\n");
        printf("2. List Employees\n");
        printf("3. Save Employees\n");
        printf("4. Load Employees\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                listEmployees();
                break;

            case 3:
                saveEmployees();
                break;

            case 4:
                loadEmployees();
                break;

            case 0:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 0);

    return 0;
}