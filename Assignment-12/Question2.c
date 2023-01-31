// Write a recursive function to print first N natural numbers in reverse order

#include<stdio.h>
#include<conio.h>

void reversenatural(int );

int main()
{
    int n ;

    printf("Enter the terms to be printed : ");
    scanf("%d",&n);

    reversenatural(n);

    return 0;
}

void reversenatural(int n)
{
    if(n==0)
        return ;
    printf("%d ",n);
    reversenatural(n-1);
}
