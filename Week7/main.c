#include <stdio.h>
#include <string.h>

int main()
{
    char supplierName[100];
    char email[100];
    char phone[30];
    char town[50];

    char backup[100];
    char searchName[100];
    char description[200];

    printf("Enter supplier name: ");
    fgets(supplierName, sizeof(supplierName), stdin);

    printf("Enter email: ");
    fgets(email, sizeof(email), stdin);

    printf("Enter phone number: ");
    fgets(phone, sizeof(phone), stdin);

    printf("Enter town: ");
    fgets(town, sizeof(town), stdin);

    supplierName[strcspn(supplierName, "\n")] = '\0';
    email[strcspn(email, "\n")] = '\0';
    phone[strcspn(phone, "\n")] = '\0';
    town[strcspn(town, "\n")] = '\0';

    printf("\n--- SUPPLIER DETAILS ---\n");
    printf("Name : %s\n", supplierName);
    printf("Email: %s\n", email);
    printf("Phone: %s\n", phone);
    printf("Town : %s\n", town);

    printf("\nString Lengths\n");
    printf("Name Length : %zu\n", strlen(supplierName));
    printf("Email Length: %zu\n", strlen(email));
    printf("Town Length : %zu\n", strlen(town));

    strcpy(backup, supplierName);

    printf("\nCopied Name: %s\n", backup);

    strcpy(description, supplierName);
    strcat(description, " operates in ");
    strcat(description, town);
    strcat(description, ".");

    printf("\nDescription: %s\n", description);

    printf("\nEnter supplier name to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    if(strcmp(searchName, supplierName) == 0)
    {
        printf("Supplier found.\n");
    }
    else
    {
        printf("Supplier not found.\n");
    }

    return 0;
}