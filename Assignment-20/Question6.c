// Write a program to calculate the length of the string using a pointer

#include<stdio.h>

int main()
{
    char arr[8] = "Lakshya" ;
    char *ptr = arr ;
    int i,count=0;

    for(i=0;*(ptr+i)!='\0';i++){
        count = count + 1;
    }

    printf("Length of the given string = %d",count);

    return 0;
}
