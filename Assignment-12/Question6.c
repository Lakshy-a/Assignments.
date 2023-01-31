// Write a recursive function to print first N even natural numbers in reverse order

#include<stdio.h>
#include<conio.h>

void reverseeven(int);

int main()
{
    int n;

    printf("Enter the count of numbers to be printed : ");
    scanf("%d",&n);

    reverseeven(n*2);

    return 0;
}

void reverseeven(int n)
{
    if(n%2==0)
        printf("%d ",n);
    if(n==1)
        return ;
    reverseeven(n-1);
}
