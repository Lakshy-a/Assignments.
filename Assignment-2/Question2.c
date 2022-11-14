//program to print a given number without its unit digit
#include<stdio.h>
int main()
{
    int n, x;
    printf("Enter the number : ");
    scanf("%d",&n);
    x = n/10;
    printf("%d without its unit digit is %d",n,x);
    return 0;
}
