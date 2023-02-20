// Write a function to sort employees according to their salaries

#include<stdio.h>
#include<string.h>

struct Employee
{
    char name[20];
    int salary;
};

void sort(struct Employee e[],int n)
{
    int i,temp=0;
    char temp1[10];

    for(i=0;i<n;i++){
        if(e[i].salary > e[i+1].salary){
            // swapping salary
            temp = e[i].salary;
            e[i].salary = e[i+1].salary;
            e[i].salary = temp;
        // swapping names
            strcpy(temp1,e[i].name);
            strcpy(e[i].name,e[i+1].name);
            strcpy(e[i+1].name,temp1);
        }
    }

    printf("Sorted data in decreasing order\n");
    for(i=0;i<10;i++){
        printf("Salary = %d and Name = %s\n",e[i].salary,e[i].name);
    }
}

int main()
{
    struct Employee e[20] ;

    int i,n;
    printf("Enter the number of employees : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\nEnter the name of %d employee : ",i+1);
        scanf("%s",e[i].name);
        fflush(stdin);

        printf("Enter the salaries of %d employee : ",i+1);
        scanf("%d",&e[i].salary);

       // printf("\n");
    }

    sort(e,n);

    return 0;
}
