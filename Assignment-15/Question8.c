// Write a function in C to print all unique elements in an array.

#include<stdio.h>

void unique(int [],int);

void duplicate(int [],int);

int main()
{
    int a[20],n,i;

    printf("Enter the number of elements in array : ");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    unique(a,n);

    return 0;
}

void unique(int a[],int n)
{
    int hash[20]={0},i,count;

    for(i=0;i<n;i++){
        hash[a[i]]++;
    }

    for(i=0;i<n;i++){
        if(hash[i]==1)
            printf("%d ",i);
    }
}
