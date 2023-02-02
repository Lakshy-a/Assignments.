// Write a function in C to merge two arrays of the same size sorted in descending
// order.

#include<stdio.h>

void merge(int [],int [],int [],int);

int main()
{
    int a[5]={9,7,5,3,1},b[5]={10,9,5,4,1},c[10],i;

    merge(a,b,c,5);

    printf("Merged array: ");
  for (i = 0; i < 2 * 5; i++)
    printf("%d ", c[i]);
  printf("\n");

    return 0;
}

void merge(int a[],int b[],int c[],int n)
{
    int i=0,j=0,k=0;

    while(i<n && j<n){
        if(a[i]>b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }

    while(i<n){
        c[k]=a[i];
        k++;
        i++;
    }

    while(j<n){
        c[k]=b[j];
        k++;
        j++;
    }
}
