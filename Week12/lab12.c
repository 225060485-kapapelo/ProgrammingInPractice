#include <stdio.h>

#define MAX_EMPLOYEES 5

typedef struct
{
    int id;
    char name[30];
    double salary;
} Employee;

/* Wrong swap - pass by value */
void swapWrong(double a, double b)
{
    double temp;

    temp = a;
    a = b;
    b = temp;
}

/* Correct swap - pass by address */
void swapSalaries(double *a, double *b)
{
    double temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

/* Display salaries */
void displaySalaries(const double salaries[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("Employee %d Salary: N$%.2f\n",
               i + 1,
               salaries[i]);
    }
}

/* Find highest salary */
double findHighest(const double salaries[], int n)
{
    double highest = salaries[0];
    int i;

    for(i = 1; i < n; i++)
    {
        if(salaries[i] > highest)
        {
            highest = salaries[i];
        }
    }

    return highest;
}

/* Calculate average */
double calculateAverage(const double salaries[], int n)
{
    double total = 0;
    int i;

    for(i = 0; i < n; i++)
    {
        total += salaries[i];
    }

    return total / n;
}

/* Give raise */
void giveRaise(double salaries[],
               int n,
               double percent)
{
    int i;

    for(i = 0; i < n; i++)
    {
        salaries[i] =
            salaries[i] *
            (1 + percent / 100.0);
    }
}

/* Update salary using pointer */
void updateSalary(Employee *e,
                  double newSalary)
{
    e->salary = newSalary;
}

/* Find employee by ID */
Employee *findEmployee(Employee list[],
                       int n,
                       int id)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(list[i].id == id)
        {
            return &list[i];
        }
    }

    return NULL;
}

/* Display all employees */
void displayEmployees(Employee list[],
                      int n)
{
    int i;

    printf("\nEMPLOYEE RECORDS\n");

    for(i = 0; i < n; i++)
    {
        printf("%d | %s | %.2f\n",
               list[i].id,
               list[i].name,
               list[i].salary);
    }
}

int main(void)
{
    /* Part A - Pointer Warmup */
    int value = 25;
    int *p = &value;

    printf("=== PART A ===\n");

    printf("Value: %d\n", value);
    printf("Address: %p\n", (void*)&value);
    printf("*p: %d\n", *p);

    *p = 50;

    printf("After change through pointer:\n");
    printf("Value: %d\n\n", value);

    /* Part B */
    printf("=== PART B ===\n");

    double salary1 = 18500.50;
    double salary2 = 21000.75;

    printf("Before swapWrong:\n");
    printf("Salary1 = %.2f\n", salary1);
    printf("Salary2 = %.2f\n", salary2);

    swapWrong(salary1, salary2);

    printf("\nAfter swapWrong:\n");
    printf("Salary1 = %.2f\n", salary1);
    printf("Salary2 = %.2f\n", salary2);

    swapSalaries(&salary1, &salary2);

    printf("\nAfter swapSalaries:\n");
    printf("Salary1 = %.2f\n", salary1);
    printf("Salary2 = %.2f\n\n", salary2);

    /* Part C */
    printf("=== PART C ===\n");

    double salaries[3] =
    {
        15000.00,
        18500.50,
        21000.75
    };

    printf("Before Raise:\n");
    displaySalaries(salaries, 3);

    printf("\nHighest Salary: %.2f\n",
           findHighest(salaries, 3));

    printf("Average Salary: %.2f\n",
           calculateAverage(salaries, 3));

    giveRaise(salaries,
              3,
              10);

    printf("\nAfter 10%% Raise:\n");
    displaySalaries(salaries, 3);

    /* Part D */
    Employee staff[MAX_EMPLOYEES] =
    {
        {1001, "Maria", 18500.50},
        {1002, "Simon", 17200.00},
        {1003, "Anna", 21000.75}
    };

    int count = 3;
    int id;
    double newSalary;

    Employee *found;

    printf("\n=== PART D ===\n");

    displayEmployees(staff, count);

    printf("\nEnter Employee ID: ");
    scanf("%d", &id);

    found = findEmployee(staff,
                         count,
                         id);

    if(found != NULL)
    {
        printf("Enter New Salary: ");
        scanf("%lf", &newSalary);

        updateSalary(found,
                     newSalary);

        printf("\nUpdated Record:\n");
        printf("%d | %s | %.2f\n",
               found->id,
               found->name,
               found->salary);
    }
    else
    {
        printf("Employee Not Found\n");
    }

    return 0;
}