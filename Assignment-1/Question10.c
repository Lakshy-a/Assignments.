// program to take date as input in the format "DD/MM/YYYY"
#include<stdio.h>
int main()
{
    int day,month,year;
    printf("Enter the date in the format \"DD/MM/YYYY\"\n");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("Day-%d ,Month-%d ,Year-%d",day,month,year);
    return 0;
}
