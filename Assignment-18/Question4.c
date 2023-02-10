// Write a function to transform string into uppercase

#include<stdio.h>

void upper(char [],int);

int main()
{
    char a[50];

    printf("Enter the string : ");
    fgets(a,50,stdin);

    upper(a,50);

    return 0;
}

void upper(char a[],int n)
{
    int i;

    for(i=0;a[i]!='\0';i++){
        if(a[i]>=97 && a[i]<=122)
            a[i] = a[i] - 32;
    }

    printf("Transformed string is : %s",a);

}
