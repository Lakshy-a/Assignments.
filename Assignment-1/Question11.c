// program to take time as an input in the format : "HH:MM"
#include<stdio.h>
int main()
{
    int hour,minute;
    printf("Enter the time in the format : \"HH:MM\"\n");
    scanf("%d:%d",&hour,&minute);
    printf("%d hour and %d minutes",hour,minute);
    return 0;
}
