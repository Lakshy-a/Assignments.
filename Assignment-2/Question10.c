/*program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/
#include<stdio.h>
int main()
{
    int n,a,temp;
    printf("Enter a number and a digit :");
    scanf("%d%d",&n,&a);
    temp = n;
    n = n*10+a;
    printf("After appending %d and %d,new number is %d",temp,a,n);
    return 0;
}
