#include <stdio.h>

int main(){
double BasicSalary;
double HouseAllowence;
double TransportAllowence;
double Tax;
double GrossSalary;
double NetSalary;

    printf("==========================\n");
    printf("EMPLOYEE SALARY CALCULATOR\n");
    printf("==========================\n");

    printf("Enter your Basic salary: ");
    scanf("%lf", &BasicSalary);

    printf("Enter your House Allowence: ");
    scanf("%lf", &HouseAllowence);

    printf("Enter your Transport Allowence: ");
    scanf("%lf", &TransportAllowence);

    printf("Enter your Tax Amount: ");
    scanf("%lf", &Tax);

GrossSalary = BasicSalary + HouseAllowence + TransportAllowence;
NetSalary = GrossSalary - Tax;

printf("========================\n");
printf("=========SALARY=========\n");
printf("Gross Salary: %.2f\n", GrossSalary);
printf("Net Salary: %.2f\n",NetSalary);
printf("========================\n");
printf("========================\n");

return 0;
}