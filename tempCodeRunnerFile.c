#include <stdio.h>
int main(){
    char municipal_name[20], mayor_name[20];
    int population;

    printf("Enter the municipality name:\n");
    scanf("%19s", municipal_name);

    printf("Enter the Mayor's name:\n");
    scanf("%19s", mayor_name);

    printf("Enter the population of the municipality:\n");
    scanf("%d", &population);

    printf("municipality name: %s\n", municipal_name);
    printf("mayor's name: %s\n", mayor_name);
    printf("population: %d\n", population);

    return 0;
}