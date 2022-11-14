// Program to check whether a given number is an even number or an odd
// number without using % operator
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    (x & 1)? printf("%d is an odd number",x): printf("%d is an even number",x);
    return 0;
}
