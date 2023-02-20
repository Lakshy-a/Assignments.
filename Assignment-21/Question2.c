// Write a function to take input employee data from the user.

#include<stdio.h>

struct Employee
{
    int id;
    char name[20];
    int salary;
};

int main()
{
    struct Employee e;

    printf("Enter the id of employee : ");
    scanf("%d",&e.id);
    printf("Enter the name of employee : ");
    scanf("%s",&e.name);
    printf("Enter the salary of employee : ");
    scanf("%d",&e.salary);

    printf("\n\nDetails of the employee are as follows\n");
    printf("Name = %s",e.name);
    printf("\nId = %d",e.id);
    printf("\nSalary = %d",e.salary);

    return 0;
}
