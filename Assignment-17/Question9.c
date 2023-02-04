// Write a C program to sort a string array in ascending order.

#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],temp;
    int i,j;

    printf("Enter the string : ");
    scanf("%s",a);

    for(i=0;i<strlen(a)-1;i++){
        for(j=i+1;j<strlen(a);j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("Sorted string is %s",a);

    return 0;
}
