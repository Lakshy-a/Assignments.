// function to calculate the factorial of a number. (TSRS)

#include<stdio.h>

int fact(int n)
{
    int factorial=1;

    for(int i=1;i<=n;i++){
        factorial = factorial*i;
    }

    return factorial;
}

int main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d",&n);

    printf("Factorial of %d is = %d",n,fact(n));

    return 0;
}
