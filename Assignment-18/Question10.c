// Write a function to find the repeated character in a given string.

#include<stdio.h>

void repestedcharacter(char [],int);

int main()
{
    char a[50];

    printf("Enter the string : ");
    fgets(a,50,stdin);

    repestedcharacter(a,50);

    return 0;
}

void repestedcharacter(char a[],int n)
{
    int hash[200]={0},i,count=0 ;

    for(i=0;i<50;i++){
        hash[a[i]]++;
    }

    for(i=97;i<123;i++){
        if(hash[i]>1){
            printf("%c --> %d\n",i,hash[i]);
        }
    }
}
