// Write a recursive function to calculate sum of squares of first n natural numbers

#include<stdio.h>
#include<conio.h>

int squaresum(int);

int main()
{
    int n,x;

    printf("Enter the count of numbers whose sum is to be find : ");
    scanf("%d",&n);

    x = squaresum(n);

    printf("Sum of squares of first %d natural numbers = %d",n,x);

    return 0;
}

int squaresum(int n)
{
    if(n==1)
        return 1;
    else
        return n*n + squaresum(n-1);
}
