// Write a recursive function to calculate sum of first N even natural numbers

#include<stdio.h>
#include<conio.h>

int oddsum(int);

int main()
{
    int n,x;

    printf("Enter the count of numbers whose sum is to be find : ");
    scanf("%d",&n);

    x = oddsum(n);

    printf("Sum of first %d even natural numbers = %d",n,x);

    return 0;
}

int oddsum(int n)
{
    if(n==0)
        return 0;
    else
        return (2*n) + oddsum(n-1);
}

