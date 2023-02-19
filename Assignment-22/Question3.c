// Write a program to calculate the sum of n numbers entered by the user using malloc
// and free.

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

        printf("Sum of values stored in array = %d",sum);

    }

    free(ptr);

    return 0;
}
