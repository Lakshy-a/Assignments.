/* Program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed */
#include<stdio.h>
int main()
{
    float a,b,c,d,e,percentage=0;
    printf("Enter the marks of Hindi,English,Mathematics,Science and Social Science out of 100 respectively : ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    percentage = (a+b+c+d+e)/5;
    if(percentage > 33)
        printf("Student is pass");
    else
        printf("Student is fail");
    return 0;
}
