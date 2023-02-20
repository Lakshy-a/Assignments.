// Write a function to find the highest salary employee from a given array of 10 employees.

#include<stdio.h>

struct Employee
{
    int salary;
};

int main()
{
    struct Employee e[10];
    int i,a=-1,b ;

    printf("Enter the salaries of 10 employees\n\n");
    for(i=0;i<10;i++){
        printf("Enter the salary of %d employee : ",i+1);
        scanf("%d",&e[i].salary);
        printf("\n");
    }

    for(i=0;i<10;i++){
        if(e[i].salary > a)
            a = e[i].salary ;
    }

    printf("Highest salary = %d",a);

    return 0;
}
