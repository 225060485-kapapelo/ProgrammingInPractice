#include <stdio.h>

int main(){

    double salaries[50];
    double highest;
    double lowest;
    double searchSalary;
    double temp;
    double total;
    double average;
    int found = 0;
    int i, j;

   //capture the slaries

    for(i = 0 ; i < 50; i++)
    {
     printf("Enter salary for employee %d: ", i + 1);
     scanf("%f", &salaries[i]);

     total += salaries[i];
     
     if(i == 0){
        highest = salaries[i];
        lowest = salaries[i];
     }
     if(salaries[i] > highest)
     {
        highest = salaries[i];
     }
     if(salaries[i]< lowest)
     {
        lowest = salaries[i];
     }
    }

    //Display all salaries
    printf("====EMPLOYEE SALARIES====");
    for(i = 0; i < 50; i++)
    {
        printf("Employee %d: %.2f\n", i + 1, salaries[i]);
    }

    //calaculate the average
    average = total / 50;
    //Display the employee salary report 
    printf("====SALARY REPORT====\n");
    printf("Total salary: %.2f\n", total);
    printf("Average salary: %.2f\n", average);
    printf("Highest Salary: %.2f\n", highest);
    printf("Lowest salary: %.2f\n", lowest);

    //Search for a salary
    printf("Enter salary to search for: ");
    scanf("%f", &searchSalary);

    for(i = 0; i < 50; i++)
    {
        if(salaries[i] == searchSalary)
        {
            printf("Salary found at Employee %d \n", i + 1);
            found = 1;
            break;

        }
    }
    if(found == 0)
    {
        printf("Salary not found.\n");
    }

    // sort salaries from the lowest to the highest 
    for( i = 0; i < 49; i++)
    {
        for (j = 0; j < 49 - i; j++)
        {
            if(salaries[j] > salaries[j + 1])
            {
                temp =salaries[j];
                salaries[j] = salaries[j + 1];
                salaries[j + 1] = temp;
            }
        }
    }

    //display sorted salaries
    printf("==SORTED SALARIES (LOWEST TO HIGHEST)==\n");
    for(i = 0; i < 50; i++)
    {
        printf("%.2f\n", salaries[i]);
    }

    return 0;

}