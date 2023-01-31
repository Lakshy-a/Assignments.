// Write a recursive function to calculate sum of digits of a given number

#include<stdio.h>
#include<conio.h>

int digitsum(int);

int main()
{
    int n,x;

    printf("Enter the number : ");
    scanf("%d",&n);

    x = digitsum(n);

    printf("Sum of digits of %d = %d",n,x);

    return 0;
}

int digitsum(int n)
{
    if(n==0)
        return 0;
    else
        return n%10 + digitsum(n/10);
}
