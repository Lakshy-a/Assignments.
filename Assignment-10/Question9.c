// function to check whether a given number contains a given digit or not (TSRS)
#include<stdio.h>

int digitornot(int n,int x)
{
    int rem ;
    while(n>0){
        rem = n%10;
        if(rem==x)
            return 1;
        else
            return 0;
    }
}


int main()
{
    int n,x ;

    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Enter the digit : ");
    scanf("%d",&x);

    digitornot(n,x) ? printf("Yes, %d contains %d",n,x) : printf("No, %d doesn't contain %d",n,x);

    return 0;
}
