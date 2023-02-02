// Write a function to sort an array of any size. (TSRN)

#include<stdio.h>

void sort(int [],int);

int main()
{
    int a[20],n,i;

    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    sort(a,n);

    return 0;
}

void sort(int a[],int n)
{
    int i,j,temp;

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("Sorted array\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
