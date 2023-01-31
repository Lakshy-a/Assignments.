// Write a program in C to calculate the power of any number using recursion.

#include<stdio.h>

int power(int,int);

int main()
{
    int n,m;

    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Enter the power : ");
    scanf("%d",&m);

    printf("%d raised to the power %d is %d",n,m,power(n,m));

    return 0;
}

int power(int n,int m)
{
    if(m==0)
        return 1;
    else
        return n * power(n,m-1);
}
