// Write a program in C to count the total number of alphabets, digits and special
// characters in a string.

#include<stdio.h>

int main()
{
    char a[50];
    int x=0,y=0,z=0,i;

    printf("Enter the string : ");
    fgets(a,50,stdin);

    for(i=0;a[i]!='\0';i++){
        if(a[i]>=48 && a[i]<=57)
            x++;
        else if(a[i]>=32 && a[i]<=47)
            y++;
        else
            z++;
    }

    printf("Total number of alphabets = %d\n",z);
    printf("Total number of digits = %d\n",x);
    printf("Total number of special characters = %d\n",y);

    return 0;
}
