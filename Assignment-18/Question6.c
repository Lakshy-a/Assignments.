// Write a function to check whether a given string is an alphanumeric string or not.
// (Alphanumeric string must contain at least one alphabet and one digit)

#include<stdio.h>

void check(char [],int);

int main()
{
    char a[50];

    printf("Enter the string : ");
    fgets(a,50,stdin);

    check(a,50);

    return 0;
}

void check(char a[],int n)
{
    int i,b=0,c=0;

    for(i=0;a[i]!='\0';i++){
        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
            b++;
        else if(a[i]>=48 && a[i]<=57)
            c++;
    }

    if(b>0 && c>0)
        printf("String is alphanumeric");
    else
        printf("String is not alphanumeric");

}
