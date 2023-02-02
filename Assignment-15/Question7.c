// Write a function in C to count a total number of duplicate elements in an array.(Means
// elements that occurs 2 times in an array)

#include<stdio.h>

void duplicate(int [],int);

int main()
{
    int a[20],n,i;

    printf("Enter the number of elements in array : ");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    duplicate(a,n);

    return 0;
}

void duplicate(int a[],int n)
{
    int hash[20]={0},i,count=0;

    for(i=0;i<n;i++){
        hash[a[i]]++;
    }

    for(i=0;i<n;i++){
        if(hash[i]==2)
            count++;
    }

    printf("%d elements occurs 2 times in an array",count);
}
