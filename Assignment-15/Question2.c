// Write a function to find the smallest number from the given array of any size. (TSRS)

#include<stdio.h>

int findsmallest(int [],int);

int main()
{
    int a[20],n,i;

    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Smallest element in the given array is %d\n\n",findsmallest(a,n));

    return 0;
}

int findsmallest(int a[],int n)
{
    int smallest=10000,i;

    for(i=0;i<n;i++){
        if(a[i]<smallest){
            smallest=a[i];
        }
    }

    return smallest;

}

