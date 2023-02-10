// Write a function to count words in a given string

#include<stdio.h>


int stringcount(char [],int);

int main()
{
    char a[50];

    printf("Enter the string : ");
    gets(a);

    printf("The number of words in the given string = %d\n\n\n",stringcount(a,50)+1);

    return 0;
}

int stringcount(char a[],int n)
{
    int count=0,i;

    for(i=0;a[i]!='\0';i++){
        if(a[i]==' ')
            count++;
    }

    return count;
}
