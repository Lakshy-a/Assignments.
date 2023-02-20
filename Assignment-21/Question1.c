// Define a structure Employee with member variables id, name, salary

#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[20];
    int salary;
};

int main()
{
    struct Employee e ;

    e.id = 1 ;
    strcpy(e.name,"Lakshya") ;
    e.salary = 2000 ;

    printf("%s has id = %d and salary = %d",e.name,e.id,e.salary);

    return 0;
}
