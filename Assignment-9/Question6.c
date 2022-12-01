// Program to check whether a year is a leap year or not. Using switch statement

#include<stdio.h>
int main()
{
    int year,value;
    printf("Enter the year : ");
    scanf("%d",&year);

    value = ((year%4==0 && year%100!=0) || year%400==0);

    switch(value){

case 1:
    printf("%d is a leap year\n",year);
    break;

case 0:
    printf("%d is not a leap year\n",year);
    break;

default:
    printf("Invalid");
    break;

    }

    return 0;
}
