// Write a program to print a string in reverse using a pointer

#include<stdio.h>
#include<string.h>

int main()
{
    char arr[8] = "Lakshya",temp;
    char *ptr = arr;
    int i,j;

    printf("Before : %s",arr);

    for(i=0,j=strlen(arr)-1;i<=j;i++,j--){
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + j);
        *(ptr + j) = temp;
    }

    printf("\nAfter : ");
        printf("%s",arr);

    return 0;
}
