// Program which takes the month number as an input and display number of
// days in that month
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the month number : ");
    scanf("%d",&x);
    if(x==2)
        printf("Number of days = 28 or 29");
    else if(x==1||x==3||x==5||x==7||x==8||x==10||x==12)
        printf("Number of days = 31");
    else
        printf("Number of days = 30");
    return 0;
}
