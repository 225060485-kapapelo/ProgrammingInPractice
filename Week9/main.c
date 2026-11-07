#include <stdio.h>
#include "employees.h"
#include "budget.h"
#include "reports.h"

int main()
{
    int choice;

    do
    {
        printf("\nMFMS MENU\n");
        printf("1. Add Employee\n");
        printf("2. List Employees\n");
        printf("3. Add Budget\n");
        printf("4. Budget Report\n");
        printf("5. Generate Report\n");
        printf("0. Exit\n");

        printf("Enter Choice: ");
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
                addBudget();
                break;

            case 4:
                budgetReport();
                break;

            case 5:
                generateReport();
                break;

            case 0:
                printf("Goodbye\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 0);

    return 0;
}