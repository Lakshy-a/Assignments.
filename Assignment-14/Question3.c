// Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],i,even=0,odd=0,n;

    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    if(arr[i]%2==0){
        even+=arr[i];
    }
    else{
        odd+=arr[i];
    }
    }

    printf("Sum of even elements in the array = %d\n",even);
    printf("Sum of odd elements in the array = %d\n",odd);

    return 0;
}
