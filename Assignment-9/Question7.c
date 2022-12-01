/*Program to take the value from the user as input electricity unit charges and calculate
total electricity bill according to the given condition . Using the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill */

#include<stdio.h>
int main()
{
    int unit;
    float charges,finalcharges;

    printf("Enter the units : ");
    scanf("%d",&unit);

    switch(unit<=50){

case 1:
    charges = unit * 0.50;
    break;

case 0:
    switch(unit<=150){

case 1:
    charges = (unit-50)*0.75 + 0.50*50;
    break;

case 0:
    switch(unit<=250){

case 1:
    charges = (unit-150)*1.20 + 100*0.75 + 50*0.50 ;
    break;

case 0:
    charges = (unit-250)*1.50 + 100*1.20 + 100*0.75 + 50*0.50 ;
    break;

    }
    }
    }
    finalcharges = charges + charges*0.20 ;

    printf("The final amount you have to pay = %0.2f\n\n",finalcharges);
    return 0;
}
