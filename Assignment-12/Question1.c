// Write a recursive function to print first N natural numbers

#include<stdio.h>
#include<conio.h>

void natural(int);

int main()
{
    int n;

    printf("Enter the numbers of terms to be printed : ");
    scanf("%d",&n);

    natural(n);

    return 0;
}

void natural(int n)
{
    if(n==0)
        return ;
    natural(n-1);
    printf("%d ",n);
}
