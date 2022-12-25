// Write a program in C to find the sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5N!/5 using the function.

#include<stdio.h>

int Factorial(int n);

int main()
{
    int i,sum=0;

    for(i=1;i<=5;i++){
        sum = sum+(Factorial(i)/i);
    }
    printf("Sum of the given series is : %d",sum);

    return 0;
}

int Factorial(int n)
{
    int fact;

    if(n==1)
        return 1;
    else
        return (n*Factorial(n-1));
}
