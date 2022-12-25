// Write a program in C to find the square of any number using the function.
#include<stdio.h>

void square(int n)
{
    printf("Square of %d is = %d\n\n",n,n*n);
}

int main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d",&n);

    square(n);
    return 0;
}
