// Program to check whether roots of a given quadratic equation are real &
// distinct, real & equal or imaginary roots
#include<stdio.h>
int main()
{
    double a,b,c,D;
    printf("Enter the values of a,b,c : ");
    scanf("%d%d%d",&a,&b,&c);
    D = (b*b)-(4*a*c);
    if(D>0)
        printf("Roots are real and distinct");
    else if(D==0)
        printf("Roots are real and equal");
    else
        printf("Roots are imaginary");
    return 0;
}
