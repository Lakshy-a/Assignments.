// program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character : ");
    scanf("%c",&a);
    if(a >= 97 && a <= 122)
        printf("%c is a lowercase letter",a);
    else
        printf("%c is an uppercase letter",a);
    return 0;
}
