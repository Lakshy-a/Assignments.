// Write a recursive function to print squares of first N natural numbers

#include<stdio.h>
#include<conio.h>

void printsquare(int );

int main()
{
    int n;

    printf("Enter the count of numbers whose square is to be printed : ");
    scanf("%d",&n);

    printsquare(n);

    return 0;
}

void printsquare(int n)
{
    if(n==0)
        return ;
    printsquare(n-1);
    printf("%d ",n*n);
}
