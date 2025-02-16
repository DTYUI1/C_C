#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char Employee_name[20];
    char Position[20];
    double Salary;
} Employee;


int main(){
    int n;
    printf("Please enter the number of Employees: ");
    scanf("%d", &n);
    Employee* employees = (Employee*) malloc(n * sizeof(Employee));

    for (int i = 0; i < n; i++){
        printf("Enter the %d employee data: ", i);
        scanf("%s %s %lf", &employees[i].Employee_name, &employees[i].Position, &employees[i].Salary);
    
    }

    system("clear");
    for (int i = 0; i < n; i++){
        printf("Employee: %s\n", employees[i].Employee_name);
        printf("Position: %s\n", employees[i].Position);
        printf("Salary: %.2lf\n\n", employees[i].Salary);
    }
    free(employees);
}