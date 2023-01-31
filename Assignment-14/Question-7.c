// Write a program to find second largest in an array.Take array values from the user.

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],i,n,largest,secondlargest;

    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        if(arr[0]>arr[1]){
            largest=arr[0];
            secondlargest=arr[1];
        }
        else{
            largest=arr[1];
            secondlargest=arr[0];
        }
    }

    for(i=2;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest){
            secondlargest=arr[i];
        }
    }

    printf("Second largest element in the array = %d\n\n",secondlargest);

    return 0;
}
