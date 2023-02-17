// Write a program to print the elements of an array in reverse order.

#include<stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = arr,i;

    for(i=9;i>=0;i--){
        printf("%d ",*(ptr+i));
    }
    return 0;
}
