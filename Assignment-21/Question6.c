// Write a function to sort employees according to their names

#include<stdio.h>
#include<string.h>

struct Employee
{
    char name[20];
    int salary;
};

void sort(struct Employee e[],int n)
{
    struct Employee temp;
    int i,j;
    char temp1[10];

    for(i=0;i<n-1;i++){
            for(j=i+1;j< n;j++){
        if(strcmp(e[i].name,e[j].name) > 0){
            temp = e[i];
            e[i] = e[j];
            e[j] = temp ;
        }
    }
    }

    printf("\nSorted data in increasing order\n");
    for(i=0;i<n;i++){
        printf("Salary = %d and Name = %s\n",e[i].salary,e[i].name);
    }
}

int main()
{
    struct Employee e[20],temp ;

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

