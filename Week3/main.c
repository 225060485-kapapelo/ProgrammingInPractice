#include <stdio.h>

int main()
{
    double  basicSalary;
    double housingAllowance;
    double transportAllowance;
    double tax;
    double grossSalary;
    double netSalary;

    printf("=====================================\n");
    printf("     EMPLOYEE SALARY CALCULATOR\n");
    printf("=====================================\n\n");

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("Enter Housing Allowance: ");
    scanf("%f", &housingAllowance);

    printf("Enter Transport Allowance: ");
    scanf("%f", &transportAllowance);

    printf("Enter Tax: ");
    scanf("%f", &tax);

    grossSalary = basicSalary + housingAllowance + transportAllowance;
    netSalary = grossSalary - tax;

    printf("\n========== SALARY REPORT ==========\n");
    printf("Gross Salary : %.2f\n", grossSalary);
    printf("Net Salary   : %.2f\n", netSalary);

    return 0;
}