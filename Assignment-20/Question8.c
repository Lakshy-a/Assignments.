// Write a program to compute the sum of all elements in an array using pointers.

#include<stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5};
    int *ptr = arr,i,sum=0;

    for(i=0;i<5;i++){
        sum += *(ptr + i);
    }

    printf("Sum = %d",sum);

    return 0;
}
