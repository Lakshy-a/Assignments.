/* Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit */
#include<stdio.h>
int main()
{
    int x,choice,a,b;;
    do {
    printf("Enter 1 to perform addition \n");
    printf("Enter 2 to perform subtraction \n");
    printf("Enter 3 to perform multiplictaion \n");
    printf("Enter 4 to perform dividion \n");
    printf("Enter 5 to exit \n\n");

    printf("Enter your choice ");
    scanf("%d",&choice);

    switch(choice){

case 1:
    printf("Enter the numbers \n");
    scanf("%d%d",&a,&b);
    printf("Sum of %d and %d = %d",a,b,a+b);
    break;

case 2:
    printf("Enter the numbers \n");
    scanf("%d%d",&a,&b);
    printf("Difference of %d and %d = %d",a,b,a-b);
    break;

case 3:
    printf("Enter the numbers \n");
    scanf("%d%d",&a,&b);
    printf("Product of %d and %d = %d",a,b,a*b);
    break;

case 4:
    printf("Enter the numbers \n");
    scanf("%d%d",&a,&b);
    printf("Division of %d and %d = %d",a,b,a/b);
    break;

case 5:
    printf("OK Bye!");
    return 0;

default:
    printf("Invalid Choice");


    }

    printf("\n\n\nDo you want to continue \nPress 1 for Yes and Press 0 for No ");
    scanf("%d",&x);
    }
    while(x==1);


    return 0;
}
