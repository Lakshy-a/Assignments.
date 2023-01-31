// Write a program to calculate the sum of numbers stored in an array of size 10. Take
// array values from the user.

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],i,sum=0,n;

    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    printf("Sum of elements in the array = %d\n\n",sum);

    return 0;
}
