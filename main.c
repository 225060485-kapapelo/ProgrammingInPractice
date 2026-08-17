#include <stdio.h>
int main(){
    char municipal_name[20], mayor_name[20];
    int population;
    // System title
    printf("===============================\n");
    printf("MUNICIPAL FINANCIAL MANAGEMENT\n");
    printf("===============================\n");
     //Welcome message 
    printf("Welcome to windhoek municipality\n");
    printf("Enter the municipality name:\n");
    scanf("%19s", municipal_name);

    printf("Enter the Mayor's name:\n");
    scanf(" %19[^\n]", mayor_name);

    printf("Enter the population of the municipality:\n");
    scanf(" %d", &population);
    printf("================================\n");
    printf("  WINDHOEK MUNICIPALITY INFORMATION\n");
    printf("================================\n");
    printf("municipality name: %s\n", municipal_name);
    printf("mayor's name: %s\n", mayor_name);
    printf("population: %d\n", population);

    printf("===============================\n");
    return 0;
}