// Write a function to swap strings of two char arrays of calling functions.

#include<stdio.h>
#include<string.h>

void swap(char *a , char *b)
{
    char temp[10];
    strcpy(temp,a);
    strcpy(a,b);
    strcpy(b,temp);
}

int main()
{
    char a[8] = "Lakshya" , b[8] = "Gupta" ;

    printf("Before Swapping, a = %s and b = %s",a,b);

    swap(a,b);

    printf("\nAfter Swapping, a = %s and b = %s\n\n",a,b);

    return 0;
}

