#include <stdio.h>
#include <string.h>

int main()
{
    double salaries[50];
    double budgets[10];
    char registrations[20][20];

    int i, j;
    double totalSalary = 0;
    double averageSalary;
    double highestSalary;
    double lowestSalary;
    double searchSalary;
    int salaryFound = 0;

    double totalBudget = 0;
    double averageBudget;
    double temp;

    char searchRegistration[20];
    int registrationFound = 0;

    //EMPLOYEE SALARIES 

    printf("===== EMPLOYEE SALARIES =====\n");

    for(i = 0; i < 50; i++)
    {
        printf("Enter salary %d: ", i + 1);
        scanf("%f", &salaries[i]);

        totalSalary += salaries[i];

        if(i == 0)
        {
            highestSalary = salaries[i];
            lowestSalary = salaries[i];
        }

        if(salaries[i] > highestSalary)
        {
            highestSalary = salaries[i];
        }

        if(salaries[i] < lowestSalary)
        {
            lowestSalary = salaries[i];
        }
    }

    averageSalary = totalSalary / 50;

    printf("\n--- Employee Salaries ---\n");

    for(i = 0; i < 50; i++)
    {
        printf("%.2f\n", salaries[i]);
    }

    printf("\nAverage Salary: %.2f\n", averageSalary);
    printf("Highest Salary: %.2f\n", highestSalary);
    printf("Lowest Salary: %.2f\n", lowestSalary);

    printf("\nEnter salary to search: ");
    scanf("%f", &searchSalary);

    for(i = 0; i < 50; i++)
    {
        if(salaries[i] == searchSalary)
        {
            printf("Salary found at position %d\n", i + 1);
            salaryFound = 1;
            break;
        }
    }

    if(salaryFound == 0)
    {
        printf("Salary not found.\n");
    }

    //DEPARTMENT BUDGETS

    printf("\n===== DEPARTMENT BUDGETS =====\n");

    for(i = 0; i < 10; i++)
    {
        printf("Enter budget %d: ", i + 1);
        scanf("%f", &budgets[i]);

        totalBudget += budgets[i];
    }

    averageBudget = totalBudget / 10;

    printf("\nDepartment Budgets:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%.2f\n", budgets[i]);
    }

    printf("\nTotal Budget: %.2f\n", totalBudget);
    printf("Average Budget: %.2f\n", averageBudget);

    //SORTING BUDGETS

    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9 - i; j++)
        {
            if(budgets[j] > budgets[j + 1])
            {
                temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }

    printf("\nBudgets Sorted (Lowest to Highest)\n");

    for(i = 0; i < 10; i++)
    {
        printf("%.2f\n", budgets[i]);
    }

    //VEHICLE REGISTRATIONS

    printf("\n===== VEHICLE REGISTRATIONS =====\n");

    for(i = 0; i < 20; i++)
    {
        printf("Enter registration %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    printf("\nVehicle Registrations\n");

    for(i = 0; i < 20; i++)
    {
        printf("%s\n", registrations[i]);
    }

    printf("\nEnter registration to search: ");
    scanf("%19s", searchRegistration);

    for(i = 0; i < 20; i++)
    {
        if(strcmp(registrations[i], searchRegistration) == 0)
        {
            printf("Registration found at position %d\n", i + 1);
            registrationFound = 1;
            break;
        }
    }

    if(registrationFound == 0)
    {
        printf("Registration not found.\n");
    }

    return 0;
}