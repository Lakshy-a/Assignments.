// function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>

int prime(int n)
{
    int i,flag=0 ;

    for(i=2;i<n;i++){
            if(n%i==0){
                flag = 1;
                break;
            }
        }

    if(flag == 1)
        return 1;
    else
        return 0;
}

int main()
{
    int n,x ;
     printf("Enter the number : ");
     scanf("%d",&n);

     x = prime(n);

     if(x==1)
        printf("%d is not a prime number",n);
     else
        printf("%d is a prime number",n);

     return 0 ;
}
