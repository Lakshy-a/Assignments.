// Write a program to demonstrate dangling pointers in C.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr ;

    ptr = (int *)calloc(1,sizeof(int));

    free(ptr);

    printf("%p ",ptr);

    return 0;
}
