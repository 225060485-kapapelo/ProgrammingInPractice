#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char name[30];
    double salary;
} Employee;

Employee *searchEmployee(Employee employees[],
                         int count,
                         int id)
{
    int i;

    for(i = 0; i < count; i++)
    {
        if(employees[i].id == id)
        {
            return &employees[i];
        }
    }

    return NULL;
}

int main(void)
{
    int capacity = 2;
    int count = 0;
    int i;

    Employee *employees = NULL;
    Employee *bigger = NULL;

    Employee e;
    Employee *found;

    /* TODO 1 */
    employees = malloc(capacity * sizeof(Employee));

    if(employees == NULL)
    {
        printf("Out of memory!\n");
        return 1;
    }

    printf("Employee ID (0 to stop): ");
    scanf("%d", &e.id);

    while(e.id != 0)
    {
        printf("Name (one word): ");
        scanf("%29s", e.name);

        printf("Salary: ");
        scanf("%lf", &e.salary);

        /* TODO 2 */
        if(count == capacity)
        {
            capacity = capacity * 2;

            bigger =
                realloc(employees,
                        capacity *
                        sizeof(Employee));

            if(bigger == NULL)
            {
                free(employees);
                return 1;
            }

            employees = bigger;

            printf("(grown to %d slots)\n",
                   capacity);
        }

        /* TODO 3 */
        employees[count] = e;
        count++;

        printf("Employee ID (0 to stop): ");
        scanf("%d", &e.id);
    }

    /* TODO 4 */
    printf("\nEMPLOYEE LIST\n");
    printf("-----------------------------\n");

    for(i = 0; i < count; i++)
    {
        printf("%d\t%s\tN$%.2f\n",
               employees[i].id,
               employees[i].name,
               employees[i].salary);
    }

    printf("\nEmployees: %d | Capacity: %d\n",
           count,
           capacity);

    /* Search Employee by ID */

    int searchID;

    printf("\nEnter Employee ID To Search: ");
    scanf("%d", &searchID);

    found =
        searchEmployee(employees,
                       count,
                       searchID);

    if(found != NULL)
    {
        printf("\nEmployee Found\n");
        printf("ID: %d\n",
               found->id);
        printf("Name: %s\n",
               found->name);
        printf("Salary: %.2f\n",
               found->salary);
    }
    else
    {
        printf("Employee Not Found\n");
    }

    /* TODO 5 */
    free(employees);
    employees = NULL;

    return 0;
}