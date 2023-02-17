// Write a function to swap values of two in variables of calling function.
#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 3, b = 5;

    printf("Before Swapping : a = %d and b = %d",a,b);

    swap(&a,&b);

    printf("\n\nAfter Swapping : a = %d and b = %d",a,b);

    return 0;
}
