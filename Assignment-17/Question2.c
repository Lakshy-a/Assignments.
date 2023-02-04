// Write a program to count the occurrence of a given character in a given string.

#include<stdio.h>

int main()
{
    char a[50],x;
    int i,count=0;

    printf("Enter the string : ");
    fgets(a,50,stdin);

    printf("Enter the character whose occurrence is to be counted : ");
    scanf("%c",&x);

    for(i=0;a[i]!='\0';i++){
        if(a[i]==x)
            count++;
    }

    printf("%c has occurred %d times in the given string\n\n",x,count);

    return 0;
}
