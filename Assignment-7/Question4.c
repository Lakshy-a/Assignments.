// program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int a,b,lcm,hcf;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    for(int i=a*b;i>0;i--){
            if(i%a==0 && i%b==0)
                lcm=i;
    }
    hcf=(a*b)/lcm;
    printf("HCF of %d and %d = %d",a,b,hcf);
    return 0;
}
