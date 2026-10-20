#include <stdio.h>

//Functions
void displayWelcome();
void displayMenu();
double calculateVAT(double amount);
double calculateSalary(double basic, double housing, double transport);
double calculateBudget(double revenue, double expenses);
int searchEmployee(int id, int ids[], int size);

void displayWelcome()
{
    printf("Welcome to the Municipal Financial Management System\n");
}

void displayMenu()
{
    printf("\n==================================\n");
    printf(" MUNICIPAL FINANCIAL MANAGEMENT\n");
    printf("==================================\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Search Employee\n");
    printf("5. Exit\n");
    printf("Enter choice: ");
}

double calculateVAT(double amount)
{
    return amount * 0.15f;
}

double calculateSalary(double basic, double housing, double transport)
{
    return basic + housing + transport;
}

double calculateBudget(double revenue, double expenses)
{
    return revenue - expenses;
}

int searchEmployee(int id, int ids[], int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        if(ids[i] == id)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int choice;
    int employeeIDs[] = {101, 102, 103, 104, 105};

    displayWelcome();

    do
    {
        displayMenu();
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                double amount;
                printf("Enter amount: ");
                scanf("%f", &amount);

                printf("VAT = %.2f\n", calculateVAT(amount));
                break;
            }

            case 2:
            {
                float basic, housing, transport;

                printf("Enter basic salary: ");
                scanf("%f", &basic);

                printf("Enter housing allowance: ");
                scanf("%f", &housing);

                printf("Enter transport allowance: ");
                scanf("%f", &transport);

                printf("Gross Salary = %.2f\n",
                       calculateSalary(basic, housing, transport));
                break;
            }

            case 3:
            {
                float revenue, expenses, balance;

                printf("Enter revenue: ");
                scanf("%f", &revenue);

                printf("Enter expenses: ");
                scanf("%f", &expenses);

                balance = calculateBudget(revenue, expenses);

                printf("Balance = %.2f\n", balance);

                if(balance > 0)
                    printf("SURPLUS\n");
                else if(balance < 0)
                    printf("DEFICIT\n");
                else
                    printf("BALANCED\n");

                break;
            }

            case 4:
            {
                int id;
                int result;

                printf("Enter Employee ID: ");
                scanf("%d", &id);

                result = searchEmployee(id, employeeIDs, 5);

                if(result != -1)
                    printf("Employee found at position %d\n", result);
                else
                    printf("Employee not found.\n");

                break;
            }

            case 5:
                printf("Goodbye.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 5);

    return 0;
}
