// Write a program in C to copy one string to another string.

#include<stdio.h>
#include<string.h>

int main()
{
    char a[50],b[50];
    int i;

    printf("Enter the string : ");
    fgets(a,50,stdin);

    for(i=0;a[i]!='\0';i++){
        b[i]=a[i];
    }

    b[strlen(b)-1]='\0';

    printf("Copied string is : %s",b);
    return 0;
}
