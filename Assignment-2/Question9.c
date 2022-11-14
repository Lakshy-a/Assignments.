// program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)
#include<stdio.h>
int main()
{
    int a,rem;
    printf("Enter the number :");
    scanf("%d",&a);
    rem = a%10;
    a = a-rem;
    printf("%d",a);
    return 0;
}
