// function to calculate the area of a circle. (TSRS)
#include<stdio.h>

int area(int n)
{

float a;
a = 3.14 * n*n;
return a;
}


int main()
{
    float r,a ;

    printf("Enter the radius : ");
    scanf("%f",&r);

    a = area(r);

    printf("Area of the circle = %.2f having the radius = %.2f\n",a,r);

    return 0;
}
