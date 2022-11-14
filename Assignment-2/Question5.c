// program to enter a three digit number and find the sum of its digits
#include<stdio.h>
int main()
{
    int n,sum = 0,temp,a,b;
    printf("Enter a three digit number : ");
    scanf("%d",&n);
    temp = n;
    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    sum = sum+a+b+n;
    printf("Sum of digits of %d is %d",temp,sum);
    return 0;
}
