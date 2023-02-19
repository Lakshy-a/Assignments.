// Write a program to ask the user to input a number of data values he would like to
// enter then create an array dynamically to accommodate the data values. Now take
// the input from the user and display the average of data values.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,arr[n],i,sum=0;
    int *ptr ;

    printf("Enter the number of elements you want to store in array : ");
    scanf("%d",&n);

    ptr = (int *)malloc(n*(sizeof(int)));

    if(ptr == NULL){
        printf("Memory not available");
        exit(0);
    }
    else{
        printf("Memory successfully allocated");
        printf("\nEnter the values in the array\n");
        for(i=0;i<n;i++){
            scanf("%d",&ptr[i]);
        }

        for(i=0;i<n;i++){
            sum += ptr[i];
        }

        printf("Average of values stored in array = %d",sum/n);

    }

    free(ptr);

    return 0;
}
