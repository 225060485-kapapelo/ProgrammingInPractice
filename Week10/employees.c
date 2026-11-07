#include <stdio.h>
#include "employees.h"

Employee employees[100];
int count = 0;

void addEmployee(void)
{
    printf("Enter Employee ID: ");
    scanf("%d", &employees[count].id);

    printf("Enter Employee Name: ");
    scanf("%s", employees[count].name);

    printf("Enter Employee Salary: ");
    scanf("%lf", &employees[count].salary);

    count++;

    printf("Employee added successfully!\n");
}

void listEmployees(void)
{
    int i;

    printf("\n===== EMPLOYEE LIST =====\n");

    if(count == 0)
    {
        printf("No employees found.\n");
    }

    for(i = 0; i < count; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
    }
}

void saveEmployees(void)
{
    FILE *fp;

    fp = fopen("employees.txt", "w");

    if(fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    int i;

    for(i = 0; i < count; i++)
    {
        fprintf(fp,
                "%d %s %.2f\n",
                employees[i].id,
                employees[i].name,
                employees[i].salary);
    }

    fclose(fp);

    printf("Data saved successfully!\n");
}

void loadEmployees(void)
{
    FILE *fp;

    fp = fopen("employees.txt", "r");

    if(fp == NULL)
    {
        printf("No saved file found.\n");
        return;
    }

    count = 0;

    while(fscanf(fp,
                 "%d %49s %lf",
                 &employees[count].id,
                 employees[count].name,
                 &employees[count].salary) == 3)
    {
        count++;
    }

    fclose(fp);

    printf("Data loaded successfully!\n");
}