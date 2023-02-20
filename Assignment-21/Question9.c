// Write a program to store information of n students and display them using structure.

#include<stdio.h>

struct Employee
{
    char name[20];
    int roll;
    int marks;
};

int main()
{
    struct Employee e[10];
    int i,n;

    printf("Enter the number of students : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter the Name ,Roll Number and Total Marks of student %d\n",i+1);
        scanf("%s%d%d",e[i].name,&e[i].roll,&e[i].marks);
    }

    for(i=0;i<n;i++){
        printf("Details of %d student are as follows : ",i+1);
        printf("Name = %s , ",e[i].name);
        printf("Roll Number = %d , ",e[i].roll);
        printf("Total Marks = %d",e[i].marks);
        printf("\n");
    }
    return 0;
}

