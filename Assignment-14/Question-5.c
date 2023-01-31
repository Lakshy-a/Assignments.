// Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user.

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],i,n,smallest=0;

    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]<arr[smallest]){
            smallest=i;
        }
    }

    printf("Smallest element in the array = %d\n\n",arr[smallest]);

    return 0;
}
