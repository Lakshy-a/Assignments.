// program to find the area of a circle and take the radius from user
#include<stdio.h>
int main()
{
    int r;
    float a;
    printf("Enter the radius : ");
    scanf("%d",&r);
    a = 3.14*r*r;
    printf("Area of circle is %f having the radius %d",a,r);
    return 0;
}
