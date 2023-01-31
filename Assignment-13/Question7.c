// Write a recursive function to calculate HCF of two numbers

#include<stdio.h>

int hcf(int , int);

int main()
{
    int m,n;

    printf("Enter the numbers\n");
    scanf("%d%d",&m,&n);

    printf("HCF of %d and %d = %d",m,n,hcf(m,n));

    return 0;
}

int hcf(int m,int n)
{
    if(m==n)
        return m;
    if(m%n==0)
        return n;
    if(n%m==0)
        return m;
    if(m>n)
        return hcf(m%n,n);
    else
        return hcf(m,n%m);
}
