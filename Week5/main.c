#include <stdio.h>
int main(){
    double salary;
    double total = 0;
    double highest = 0;
    double lowest = 0;
    double average;

    printf("====================================\n");
    printf("Welcome to Municipal Employee Salary\n");
    printf("====================================\n");

    for(int k = 1; k <= 50; k++){
        printf("Enter salary for employee %d: ", k);
        scanf("%lf", &salary);
    
     
        total += salary;
 if (k == 1) {
            highest = salary;
            lowest = salary;
        }

        
        if (salary > highest) {
            highest = salary;
        }

        
        if (salary < lowest) {
            lowest = salary;
        }
      }
       average = total / 50;

     printf("==================\n");
     printf("  SALARY REPORT\n");
     printf("==================\n");
     printf("Average salary: %.2f\n", average);
     printf("Highest salary: %.2f\n", highest);
     printf("Lowest salary: %.2f\n",lowest);

     return 0;
   
}