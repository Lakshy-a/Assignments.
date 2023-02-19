// Write a program to read a one dimensional array, print sum of all elements along with
// inputted array elements using dynamic memory allocation.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[100],n,sum=0,i ;
    int *ptr ;

    printf("Enter the number of elements to be there in the array : ");
    scanf("%d",&n) ;

    ptr = (int *)calloc(n,sizeof(int)) ;

    if(ptr==NULL){
        printf("Not sufficient memory available");
        exit(0);
    }
    else{
    printf("Memory successfully allocated\n");

    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++)
        scanf("%d",(ptr+i));

    printf("Elements in the array are : ");
    for(i=0;i<n;i++){
        printf("%d ",*(ptr+i));
        sum += *(ptr+i);
    }

    printf("\nSum of elements in the array = %d",sum);
    }

    free(ptr);

    return 0;
}
