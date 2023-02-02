// Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.

#include<stdio.h>

int adjacent(int [],int);

int main()
{
    int a[20],n,i;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("%d ",adjacent(a,n));

    return 0;
}

int adjacent(int a[],int n)
{
    int i;

    for(i=0;i<n;i++){
        if(a[i]==a[i+1])
            return a[i];
    }
}
