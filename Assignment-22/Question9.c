// Write a program to allocate memory dynamically of the size in bytes entered by the
// user. Also handle the case when memory allocation is failed.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int *ptr ;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    ptr = (int *)malloc(n*sizeof(int));

    if(ptr==NULL){
        printf("Insufficient Memory ");
        exit(0);
    }
    else
    {
        printf("Memory allocated successfully");
    }

    free(ptr);

    return 0;
}
