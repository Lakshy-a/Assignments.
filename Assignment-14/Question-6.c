// Write a program to sort elements of an array of size 10. Take array values from the
// user.

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],i,j,n,temp;

    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("\nSorted array\n");
    for(j=0;j<n;j++)
        printf("%d ",arr[j]);

    return 0;
}
