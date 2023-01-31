// Write a recursive function to print reverse of a given number

#include<stdio.h>

void  reverse(int);

int main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d",&n);

    reverse(n);

    return 0;
}

void reverse(int n)
{
    int a;

    if(n==0)
        return ;

    printf("%d",n%10);
    reverse(n/10);
}
