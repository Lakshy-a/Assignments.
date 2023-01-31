// Write a program in C to copy the elements of one array into another array.Take array
// values from the user.

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr1[20],arr2[20],i,n;

    printf("Enter the elements in the first array : ");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
        arr2[i]=arr1[i];
    }

    printf("Elements in the second array are\n");
    for(i=0;i<n;i++)
        printf("%d ",arr2[i]);

    return 0;
}
