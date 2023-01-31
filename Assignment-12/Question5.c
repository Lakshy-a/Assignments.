// Write a recursive function to print first N even natural numbers

#include<stdio.h>
#include<conio.h>

void evennatural(int );

int main()
{
    int n;

    printf("Enter the count of numbers to be printed : ");
    scanf("%d",&n);

    evennatural(n*2);

    return 0;
}

void evennatural(int n)
{
    if(n==0)
    return ;
    evennatural(n-1);
    if(n%2==0)
        printf("%d ",n);
}
