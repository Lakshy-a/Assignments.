// Write a program in C to count the digits of a given number using recursion.

#include<stdio.h>

int digitcount(int);

int main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d",&n);

    printf("Number of digits in %d = %d",n,digitcount(n));

    return 0;
}

int digitcount(int n)
{
    if(n==0)
    return 0;
    else
        return (1 + digitcount(n/10));
}
