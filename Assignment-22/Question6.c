// Write a program in C to find the largest element using Dynamic Memory Allocation.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i ;
    int *ptr ;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    ptr = (int *)calloc(n,sizeof(int));

    if(ptr==NULL){
        printf("Not sufficient memory available");
        exit(0);
    }
    else{
        printf("Memory successfully allocated\n");
        printf("Enter the elements\n");
        for(i=0;i<n;i++){
            scanf("%d",(ptr+i));
    }

    for(i=0;i<n;i++){
    if(*(ptr)<*(ptr+i))
        *ptr = *(ptr+i);
    }

    printf("Largest element among the entered elements = %d",*(ptr));

    }

    free(ptr);

    return 0;
}
