// Find out the maximum and minimum from an array using dynamic memory allocation in C.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[50],n,i,*ptr,max=-1,min=10000;

    printf("Enter the number of elements to be there in the array : ");
    scanf("%d",&n);

    ptr = (int *)calloc(n,sizeof(int)) ;

    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++)
        scanf("%d",(ptr+i));

    printf("Array is : ");
    for(i=0;i<n;i++)
        printf("%d ",*(ptr + i));


    for(i=0;i<n;i++){
        if(*(ptr+i)>max)
            max = *(ptr+i);
        if(*(ptr+i)<min)
            min = *(ptr+i);
    }

    printf("\nMaximum element = %d",max);
    printf("\nMinimum element = %d",min);

    return 0 ;
}
