// Write a function in C to read n number of values in an array and display it in reverse
// order.

#include<stdio.h>

void reverse(int [],int);

int main()
{
    int a[20],n,i;

    printf("Enter the number of elements in array : ");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    reverse(a,n);

    return 0;
}

void reverse(int a[],int n)
{
    int i;

    printf("Array in the reverse order\n");
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
}
