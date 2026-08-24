#include <stdio.h>
int main(){
    double revenue, expenses, balance;
    int departments;
    double payroll, procurement, assets;

    printf("============================\n");
    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("============================\n");

    printf("Enter the total Revenue: ");
    scanf("%lf", &revenue);

    printf("Enter the total Expenses: ");
    scanf("%lf", &expenses);
    
    balance = revenue - expenses;

    printf("Revenue  : %.2f\n", revenue);
    printf("Expenses : %.2f\n", expenses);
    printf("Balance  : %.2f\n", balance);

    if (balance > 0)
    {
        printf("Surplus  : %.2f\n", balance);
    }
    else if (balance < 0)
    {
        printf("Deficit  : %.2f\n", balance);
    }
    else
        {
         printf("The budget is balanced." );
        }
   
    printf("Enter the number of departments: ");
    scanf("%d", &departments);

    printf("Enter the payroll Amount: ");
    scanf("%lf", &payroll);

    printf("Enter the procurement Amount: ");
    scanf("%lf", &procurement);

    printf("Enter the Asset Amount: ");
    scanf("%lf", &assets);

    printf("=========================\n");
    printf("MUNICIPAL BUDGET SUMMARY\n");
    printf("=========================\n");

    printf("Department : %d\n", departments);
    printf("Revenue    : %.2f\n", revenue);
    printf("Expenses   : %.2f\n", expenses);
    printf("Balance    : %.2f\n", balance);
    printf("Payroll    : %.2f\n", payroll);
    printf("Procurement: %.2f\n", procurement);
    printf("Assets     : %.2f\n", assets);

    return 0;

}

