// program to print unit digit of a given number
#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter the number : ");
    scanf("%d",&n);
    x = n%10;
    printf("%d is the unit digit of %d",x,n);
    return 0;
}
