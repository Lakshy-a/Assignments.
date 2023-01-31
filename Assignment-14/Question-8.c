// Write a program to find the second smallest number in an array.Take array values
// from the user.

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],i,n,smallest,secondsmallest;

    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        if(arr[0]<arr[1]){
            smallest=arr[0];
            secondsmallest=arr[1];
        }
        else{
            smallest=arr[1];
            secondsmallest=arr[0];
        }
    }

    for(i=2;i<n;i++){
        if(arr[i]<smallest){
            secondsmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<secondsmallest){
            secondsmallest=arr[i];
        }
    }

    printf("Second smallest element in the array = %d\n\n",secondsmallest);

    return 0;
}
