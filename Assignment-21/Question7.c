// Write a program to calculate the difference between two time periods.

#include<stdio.h>

struct time
{
    int sec;
    int min;
    int hour;
};

int main()
{
    struct time t1,t2,t3 ;

    printf("Enter the first time : ");
    scanf("%d:%d:%d",&t1.hour,&t1.min,&t1.sec);

    printf("Enter the second time : ");
    scanf("%d:%d:%d",&t2.hour,&t2.min,&t2.sec);

    if(t1.sec < t2.sec){
        t1.min -= 1;
        t1.sec += 60;
    }
    t3.sec = t1.sec - t2.sec ;

    if(t1.min < t2.min){
        t1.hour -= 1;
        t1.min += 60;
    }
    t3.min = t1.min - t2.min ;

    t3.hour = t1.hour - t2.hour ;

    printf("The difference between the entered times = %d hours , %d minutes and %d seconds",t3.hour,t3.min,t3.sec);

    return 0;
}
