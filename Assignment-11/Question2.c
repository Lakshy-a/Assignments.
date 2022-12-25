// function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>

int lcm(int a,int b)
{
    int i ;
    for(i=1;i<=a*b;i++){
        if(i%a==0 && i%b==0)
            return i;
    }

}

int hcf(int a,int b)
{
  return (a*b)/lcm(a,b) ;
}

int main()
{
    int a,b ;

    printf("enter two number \n");
    scanf("%d%d",&a,&b);

    printf("LCM of %d and %d = %d",a,b,hcf(a,b));

    return 0;
}
