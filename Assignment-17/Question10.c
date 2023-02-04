// Write a program in C to Find the Frequency of Characters.

#include<stdio.h>
#include<string.h>

int main()
{
    char a[50],x;
    int i,count=0;

    printf("Enter the string : ");
    fgets(a,50,stdin);

    printf("Enter the character : ");
    scanf("%c",&x);

    for(i=0;a[i]!='\0';i++){
        if(a[i]==x)
            count++;
    }

    if(count>0)
    printf("%c occurred %d times in the entered string",x,count);
    else
        printf("%c is not present in the entered string",x);
    return 0;
}


