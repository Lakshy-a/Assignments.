// Program to check whether a given number is a three digit number or not.
#include<stdio.h>
int main()
{
    int x,count=0;
    printf("Enter the number : ");
    scanf("%d",&x);
    if((x >= 100) && (x<1000))
        printf("%d is a three digit number",x);
    else
        printf("%d is not a three digit number",x);
    return 0;
}
