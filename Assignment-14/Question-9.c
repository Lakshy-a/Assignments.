// Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],n,i;

    printf("Enter the numebr of elements : ");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Elements in the reverse order\n");

    i=1;

    while(i<=n){
        printf("%d ",arr[n-i]);
        i++;
    }
    return 0;
}
