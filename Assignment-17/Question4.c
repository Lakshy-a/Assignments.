// Write a program to convert a given string into uppercase

#include<stdio.h>

int main()
{
    char a[50];
    int i;

    printf("Enter the string : ");
    fgets(a,50,stdin);

    for(i=0;a[i]!='\0';i++){
        if(a[i]>=65 && a[i]<=90)
            a[i] = a[i] + 32;
    }

    printf("Converted string is %s",a);

    return 0;
}
