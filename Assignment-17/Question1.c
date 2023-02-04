// Write a program to calculate the length of the string.

#include<stdio.h>

int main()
{
    char a[50];
    int i,count=0;

    printf("Enter the string : ");
    fgets(a,50,stdin);

    for(i=0;a[i]!='\0';i++){
        count++;
    }

    printf("Length of the entered string = %d",count);

    return 0;
}
