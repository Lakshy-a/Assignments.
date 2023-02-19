// Define a function to input variable length string and store it in an array without
// memory wastage.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i ;
    char arr[n] ;
    char *ptr ;

    printf("Enter the size of string you want to enter : ");
    scanf("%d",&n);

    ptr = (char *)malloc(n*sizeof(char));

    if(ptr==NULL){
        printf("Memory is not available");
        exit(0);
    }
    else{
        printf("Memory successfully allocated\n");
        printf("Enter the string : ");
        scanf("%s",ptr);

        printf("The string is : ");
        printf("%s",ptr);
    }

    free(ptr);

    return 0;
}
