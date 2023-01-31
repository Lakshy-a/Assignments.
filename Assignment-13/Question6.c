// Write a recursive function to calculate factorial of a given number

#include<stdio.h>

int factorial(int n);

int main()
{
    int n,x;

    printf("Enter the number : ");
    scanf("%d",&n);

    x = factorial(n);

    printf("Factorial of %d = %d",n,x);

    return 0;
}

int factorial(int n)
{
    if(n==1)
    return 1;
    else
        return n*factorial(n-1);
}
