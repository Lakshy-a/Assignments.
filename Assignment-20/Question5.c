// Write a program to find the maximum number between two numbers using a pointer

#include<stdio.h>

int main()
{
    int a,b;
    int *p1 = &a , *p2 = &b ;

    printf("Enter the two numbers : ");
    scanf("%d %d",&a,&b);


    if(*p1 > *p2)
        printf("%d is maximum",*p1);
    else
        printf("%d is maximum",*p2);

    return 0;
}
