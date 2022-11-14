/*program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/
#include<stdio.h>
int main()
{
    char x;
    printf("Enter a character : ");
    scanf("%c",&x);
    if(x>=65 && x<=90)
        printf("Entered character is an uppercase letter");
    else if(x>=97 && x<=122)
        printf("Entered character is an lowercase letter");
    else if(x>=48 && x<=57)
        printf("Entered character is a digit");
    else
        printf("Entered character is a special character");
    return 0;
}
