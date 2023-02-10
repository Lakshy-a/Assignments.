// Write a function to reverse a string.

#include<stdio.h>
#include<string.h>

void reversestring(char [],int );

int main()
{
    char a[50];

    printf("Enter the string : ");
    fgets(a,50,stdin);

    reversestring(a,50);

    return 0;
}

void reversestring(char a[],int n)
{
    int i;

    for(i=strlen(a)-1;i>=0;i--){
        printf("%c",a[i]);
    }

}
