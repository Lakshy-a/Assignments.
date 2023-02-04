// Write a program to reverse a string.

#include<stdio.h>
#include<string.h>

int main()
{
    char a[50];
    int i,j,flag=1;

    printf("Enter the string : ");
    scanf("%s",a);

    i=0;
    j=strlen(a)-1;

    while(i<=j){
       if(a[i]==a[j]){
        i++;
        j--;
       }
       else{
        flag=0;
        break;
       }
    }

    if(flag == 1)
        printf("String is pallindrome\n\n");
    else
        printf("String is not pallindrome\n\n");

    return 0;
}
