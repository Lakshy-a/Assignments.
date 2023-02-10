// Write a function to check whether a given string is palindrome or not.

#include<stdio.h>
#include<string.h>

int pallindrome(char [],int);

int main()
{
    char a[50];
    int x;

    printf("Enter the string : ");
    gets(a);

    x = pallindrome(a,50);

    if(x==0)
        printf("String is pallindrome");
    else
        printf("String is not pallindrome");

    return 0;
}

int pallindrome(char a[],int n)
{
    int i,j,flag;

    i=0;
    j=strlen(a)-1;

    while(i<=j){
        if(a[i]==a[j]){
            i++;
            j--;
            flag = 0;
        }
        else{
            flag = 1;
            break;
        }
    }

    return flag ;
}
