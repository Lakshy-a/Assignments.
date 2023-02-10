// Write a function to calculate length of the string

#include<stdio.h>

int stringlength(char [],int);

int main()
{
    char a[50];

    printf("Enter the string : ");
    fgets(a,50,stdin);

    printf("Length of the given string = %d",stringlength(a,50));

    return 0;
}

int stringlength(char a[],int n)
{
    int i,count=0;

    for(i=0;a[i]!='\0';i++){
        count++;
    }

    return count;
}
