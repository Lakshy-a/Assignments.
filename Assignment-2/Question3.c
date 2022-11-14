//program to swap the values of two variables
#include<stdio.h>
int main()
{
    int a,b,temp=0;
    printf("Enter the two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d,b=%d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping a=%d,b=%d",a,b);
    return 0;
}
