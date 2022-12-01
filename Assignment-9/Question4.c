/* Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an isosceles
triangle or not
b. Check whether a given set of three numbers are lengths of sides of a right
angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle or not
d. Exit  */

#include<stdio.h>
int main()
{
    int choice,a,b,c;
    printf("Press 1 to check whether a given set of three numbers are lengths of an isosceles triangle or not");
    printf("\nPress 2 to check whether a given set of three numbers are lengths of an right angled triangle or not");
    printf("\nPress 3 to check whether a given set of three numbers are lengths of an equilateral triangle or not");
    printf("\nPress 4 to exit");
    printf("\n\nEnter your choice : ");
    scanf("%d",&choice);

    switch(choice){

case 1:
    printf("\n\nEnter the length of sides \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b || b==c || c==a)
        printf("Entered set of three numbers are lengths of an isosceles triangle\n\n");
    else
        printf("Entered set of three numbers are not the lengths of an isosceles triangle\n\n");
    break;

case 2:
    printf("\n\nEnter the length of sides \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
        printf("Entered set of three numbers are lengths of a right angled triangle\n\n");
    else
        printf("Entered set of three numbers are not the lengths of a right angled triangle\n\n");
    break;

case 3:
    printf("\n\nEnter the length of sides \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b==c)
        printf("Entered set of three numbers are lengths of an equilateral triangle\n\n");
    else
        printf("Entered set of three numbers are not the lengths of an eqilateral triangle\n\n");
    break;

case 4:
    return 0;
    break;

default:
    printf("Invalid Choice\n\n");
    break;

    }
    return 0;
}
