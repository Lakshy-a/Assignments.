// Write a program to input and print text using dynamic memory allocation.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char arr[20] ;
    char *ptr ;

    ptr = (char *)calloc(20,sizeof(char));

    if(ptr==NULL){
        printf("Not sufficient memory available");
        exit(0);
    }
    else{
    printf("Memory successfully allocated\n");
    printf("Enter any string : ");
    fgets(ptr,20,stdin);
    fflush(stdin);

    printf("Entered string is : %s",ptr);
    }

    free(ptr) ;

    return 0;
}
