#include <stdio.h>

int main()
{
    double salary;
    double total = 0;
    double average;
    double highest;
    double lowest;

    int i;

    printf("==================================\n");
    printf(" MUNICIPAL EMPLOYEE SALARY ANALYSIS\n");
    printf("==================================\n\n");

    for(i = 1; i <= 50; i++)
    {
        printf("Enter salary for employee %d: ", i);
        scanf("%f", &salary);

        total = total + salary;

        if(i == 1)
        {
            highest = salary;
            lowest = salary;
        }

        if(salary > highest)
        {
            highest = salary;
        }

        if(salary < lowest)
        {
            lowest = salary;
        }
    }

    average = total / 50;

    printf("\n========== SALARY REPORT ==========\n");
    printf("Total Salary   : %.2f\n", total);
    printf("Average Salary : %.2f\n", average);
    printf("Highest Salary : %.2f\n", highest);
    printf("Lowest Salary  : %.2f\n", lowest);

    return 0;
}