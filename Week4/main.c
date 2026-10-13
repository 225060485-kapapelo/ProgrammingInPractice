#include <stdio.h>

int main()
{
    char supplierName[50];
    double price;
    double  budget;
    int registered;
    int documentsComplete;

    printf("=====================================\n");
    printf("       TENDER EVALUATION SYSTEM\n");
    printf("=====================================\n\n");

    printf("Enter Supplier Name: ");
    scanf("%49s", supplierName);

    printf("Enter Tender Price: ");
    scanf("%f", &price);

    printf("Enter Available Budget: ");
    scanf("%f", &budget);

    printf("Is Supplier Registered? (1=Yes, 0=No): ");
    scanf("%d", &registered);

    printf("Are Documents Complete? (1=Yes, 0=No): ");
    scanf("%d", &documentsComplete);

    printf("\n=========== RESULT ===========\n");
    printf("Supplier: %s\n", supplierName);

    if (registered == 1 && documentsComplete == 1 && price <= budget)
    {
        printf("Status: Qualified\n");
    }
    else
    {
        printf("Status: Disqualified\n");
    }

    return 0;
}