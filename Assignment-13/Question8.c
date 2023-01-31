// Write a recursive function to print first N terms of Fibonacci series

#include<stdio.h>

int fibonacci(int);

int main()
{
    int n,i;

    printf("Enter the count of numbers to be there in the series : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d ",fibonacci(i));
    }

    return 0;
}

int fibonacci(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
