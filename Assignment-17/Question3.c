// Write a program to count vowels in a given string

#include<stdio.h>

int main()
{
    char a[50];
    int i,count=0;

    printf("Enter the string : ");
    fgets(a,50,stdin);

    for(i=0;a[i]!='\0';i++){
        if(a[i] =='a' || a[i] =='e' || a[i] =='i' || a[i] =='o' || a[i] =='u' || a[i] =='A' || a[i] =='E' || a[i] =='I' || a[i] =='O' || a[i] =='U')
            count++;
    }

    printf("Number of vowels in the entered string = %d\n\n",count);

    return 0;
}
