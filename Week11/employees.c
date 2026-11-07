#include <stdio.h>
#include "records.h"

Employee employees[MAX_RECORDS];
int employeeCount = 0;

void addEmployee(void)
{
    if(employeeCount >= MAX_RECORDS)
    {
        printf("Employee list full!\n");
        return;
    }

    printf("Employee ID: ");
    scanf("%d", &employees[employeeCount].id);

    printf("Name: ");
    scanf("%29s", employees[employeeCount].name);

    printf("Department: ");
    scanf("%19s", employees[employeeCount].department);

    printf("Salary: ");
    scanf("%lf", &employees[employeeCount].salary);

    employeeCount++;

    printf("Employee Added Successfully!\n");
}

void displayEmployees(void)
{
    int i;

    if(employeeCount == 0)
    {
        printf("No employees recorded.\n");
        return;
    }

    printf("\nEMPLOYEE LIST\n");
    printf("-------------------------------------------------\n");
    printf("ID\tNAME\tDEPARTMENT\tSALARY\n");

    for(i = 0; i < employeeCount; i++)
    {
        printf("%d\t%s\t%s\t%.2f\n",
               employees[i].id,
               employees[i].name,
               employees[i].department,
               employees[i].salary);
    }
}

void saveEmployees(void)
{
    FILE *fp;

    fp = fopen("employees.dat", "wb");

    if(fp == NULL)
    {
        printf("Cannot open file.\n");
        return;
    }

    fwrite(employees,
           sizeof(Employee),
           employeeCount,
           fp);

    fclose(fp);

    printf("Employees saved successfully.\n");
}

void loadEmployees(void)
{
    FILE *fp;

    fp = fopen("employees.dat", "rb");

    if(fp == NULL)
    {
        printf("File does not exist.\n");
        return;
    }

    employeeCount =
        fread(employees,
              sizeof(Employee),
              MAX_RECORDS,
              fp);

    fclose(fp);

    printf("Employees loaded successfully.\n");
}