// Write a recursive function to print first N odd natural numbers in reverse order

#include<stdio.h>
#include<conio.h>

void reverseodd(int);

int main()
{
    int n;

    printf("Enter the count of numbers to be there : ");
    scanf("%d",&n);

    reverseodd(n*2);

    return 0;
}

void reverseodd(int n)
{
    if(n==0)
        return ;
    if(n%2!=0)
        printf("%d ",n);
    reverseodd(n-1);
}
