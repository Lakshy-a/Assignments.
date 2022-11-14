//program to take the amount in INR and convert it into USD.
#include<stdio.h>
int main()
{
    int inr;
    float usd;
    printf("Enter the amount in INR : ");
    scanf("%d",&inr);
    usd = 76.23 * inr;
    printf("%d INR is equivalent to %f USD",inr,usd);
    return 0;
}
