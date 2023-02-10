// Write a function to compare two strings.

#include<stdio.h>
#include<string.h>

int comparestring(char [],char [],int);

int main()
{
    char a[50],b[50];
    int x;

    printf("Enter the string 1 : ");
    fgets(a,50,stdin);
    printf("Enter the string 2 : ");
    fgets(b,50,stdin);

    x = comparestring(a,b,50);

    if(x==1)
        printf("Strings are same");
    else
        printf("Strings are not same");

    return 0;
}

int comparestring(char a[],char b[],int n)
{
    int i,flag=-1;

    for(i=0;a[i]!='\0' || b[i]!='\0';){
        if(a[i]==b[i]){
            i++;
            flag = 1;
        }
        else {
            flag = 0;
            break;
        }
    }

    return flag ;
}
