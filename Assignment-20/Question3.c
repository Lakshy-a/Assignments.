// Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

#include<stdio.h>

void sort(int *ptr ,int n)
{
    int i,j,temp;

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(*(ptr+i)>*(ptr+j)){
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
}

int main()
{
    int arr[5] = {9,1,8,2,7};
    int *ptr = arr,i;

    printf("Array before swapping : ");
    for(i=0;i<5;i++)
        printf("%d ",arr[i]);

    sort(arr,5);

    printf("\nArray after swapping : ");
    for(i=0;i<5;i++)
        printf("%d ",arr[i]);

    return 0;
}
