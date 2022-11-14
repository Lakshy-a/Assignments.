//Program to check whether the given number is even or odd using a bitwise
//operator.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    (n & 1) ? printf("%d is an odd number",n):printf("%d is an even number",n);
    return 0;
}
