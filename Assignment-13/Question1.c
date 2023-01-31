// Write a recursive function to calculate sum of first N natural numbers

#include<stdio.h>
#include<conio.h>

int sum(int);

int main()
{
    int n,x;

    printf("Enter the count of numbers whose sum is to be find : ");
    scanf("%d",&n);

    x = sum(n);

    printf("Sum of first %d natural numbers = %d",n,x);

    return 0;
}

int sum(int n)
{
    if(n==1)
        return 1;
    else
        return n + sum(n-1);
}
