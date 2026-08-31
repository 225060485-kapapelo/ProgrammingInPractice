#include <stdio.h>
int main(){


    char SupplierName[60];
    double Price;
    double Budget;
    int Registration;
    int DocumentsComplete;

    printf("======================\n");
    printf("TENDER EVALUATION\n");
    printf("======================\n");

    printf("Enter supplier name: ");
    scanf(" %59s", SupplierName);

    printf("Enter the Price: ");
    scanf("%lf", &Price);

    printf("Enter the Budget: ");
    scanf("%lf", &Budget);

    printf("Is supplier registered? (1 = YES and 0 = NO): ");
    scanf("%d", &Registration);

    printf("Are documents complete? (1 = YES and 0 = NO): ");
    scanf("%d", &DocumentsComplete);


    printf("=====================\n");
    printf("TENDER RESULTS\n");
    printf("=====================\n");

    printf("Supplier: %s\n",SupplierName);

    if (Registration == 1 && DocumentsComplete == 1 && Price<= Budget)
    {
        printf("Status: CONGRATULATIONS YOU HAVE QUALIFIED\n");
    }
    else
    {
        printf("Status: DISQUALIFIED\n");
    }

printf("=====================\n");

    return 0;

}