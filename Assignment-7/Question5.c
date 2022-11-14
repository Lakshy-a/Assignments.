// program to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
int main()
{
    int a,b,lcm,hcf;
    printf("Enter the numbers : ");
    scanf("%d%d",&a,&b);
    for(int i=a*b;i>0;i--){
        if(i%a==0 && i%b==0)
            lcm=i;
    }
    hcf=(a*b)/lcm;
    if(hcf==1)
        printf("%d and %d are co-prime",a,b);
    else
        printf("%d and %d are not co-prime",a,b);
    return 0;
}
