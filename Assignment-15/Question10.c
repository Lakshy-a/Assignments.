//Write a function in C to count the frequency of each element of an array.

#include<stdio.h>

void frequency(int [],int);

void duplicate(int [],int);

int main()
{
    int a[20],n,i;

    printf("Enter the number of elements in array : ");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    frequency(a,n);

    return 0;
}

void frequency(int a[],int n)
{
    int hash[20]={0},i,count;

    for(i=0;i<n;i++){
        hash[a[i]]++;
    }

    for(i=0;i<n;i++){
        if(hash[i]!=0)
            printf("%d --> %d\n",i,hash[i]);
    }

}
