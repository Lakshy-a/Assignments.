// Write a recursive function to print first N odd natural numbers

#include<stdio.h>
#include<conio.h>

void oddnatural(int );

int main()
{
    int n;

    printf("Enter the count of odd numbers to be printed : ");
    scanf("%d",&n);

    oddnatural(n*2);

    return 0;
}

void oddnatural(int n)
{
    if(n==0)
      return ;
    oddnatural(n-1);
    if(n%2!=0)
        printf("%d ",n);
}
