#include<stdio.h>
int main()
{
    int num;
    printf("Enter the day number : ");
    scanf("%d",&num);

    switch(num){

case 0:
    printf("Get all your works done tomorrow is new day :-) ");
    break;

case 1:
    printf("Have a marvelous Monday! ");
    break;

case 2:
    printf("Happy Tuesday! Don’t worry, Friday will come in the blink of an eye");
    break;

case 3:
    printf("Today is Wednesday! Thank God and be grateful that you get to live another day");
    break;

case 4:
    printf("Happy Thursday! Pay day is almost here, I can almost taste it");
    break;

case 5:
    printf("One more day to go then it's a weekend");
    break;

case 6:
    printf("Finally weekend is here ");
    break;

default:
    printf("Invalid Choice");

    }
    return 0;
}
