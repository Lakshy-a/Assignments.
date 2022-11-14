// Program to check whether a given number is positive or non positive.
#include<stdio.h>
int main()
{
    int x ;
    printf("Enter the number : ");
    scanf("%d",&x);
    if(x>0)
        printf("%d is a positive number",x);
    else
        printf("%d is a non-positive number",x);
    return 0;
}
