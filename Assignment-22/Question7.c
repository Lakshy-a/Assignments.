// Write a program to demonstrate memory leak in C.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a ;
    int *ptr ;

    ptr = (int *)calloc(1,sizeof(int));

    printf("Enter the value of \"a\" : ");
    scanf("%d",(ptr));

    printf("Currently ptr is pointing to a whose value is %d",*ptr);

    int b = 10 ;

    ptr = &b;

    printf("\nNow ptr is pointing to b whose value is %d\n\n\n",*ptr);

    return 0;
}
