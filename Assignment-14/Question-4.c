// Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],i,greatest=0,n;

    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        if(arr[i]>arr[greatest]){
            greatest=i;
        }
    }

    printf("Greatest element in the array = %d\n\n",arr[greatest]);

    return 0;
}
