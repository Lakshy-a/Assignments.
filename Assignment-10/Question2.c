// function to calculate simple interest. (TSRS)
#include<stdio.h>

float simpleinterest(int a,float b,int c)
{
    float x;
    x = (a*b*c)/100;

    return x;

}

int main()
{
   int p,t;
   float r;
   float SI;

   printf("Enter the values of principle,rate and time respectively\n");
   scanf("%d%f%d",&p,&r,&t);

   SI = simpleinterest(p,r,t);

   printf("Simple Interest = %.2f",SI);

   return 0;
}
