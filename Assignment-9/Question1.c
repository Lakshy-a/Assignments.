// program which takes the month number as an input and display number of
// days in that month
#include<stdio.h>
int main()
{
    int month;
    printf("Enter the month number : ");
    scanf("%d",&month);

    switch (month){

case 1:
    printf("Number of days in %d st month = 31",month);
    break;

case 2:
    printf("Number of days in %d nd month = 28/29",month);
    break;

case 3:
    printf("Number of days in %d rd month = 31",month);
    break;

case 4:
    printf("Number of days in %d th month = 30",month);
    break;

case 5:
    printf("Number of days in %d th month = 31",month);
    break;

case 6:
    printf("Number of days in %d th month = 30",month);
    break;

case 7:
    printf("Number of days in %d th month = 31",month);
    break;

case 8:
    printf("Number of days in %d th month = 31",month);
    break;

case 9:
    printf("Number of days in %d th month = 30",month);
    break;

case 10:
    printf("Number of days in %d th month = 31",month);
    break;

case 11:
    printf("Number of days in %d th month = 30",month);
    break;

case 12:
    printf("Number of days in %d th month = 31",month);
    break;

default:
    printf("Invalid month number ");
    }
    return 0;
}
