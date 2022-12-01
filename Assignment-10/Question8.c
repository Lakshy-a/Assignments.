// function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>

int fact(int n)
{
    int f=1 ;
    for(int i=1;i<=n;i++){
        f = f*i ;
    }
    return f ;
}

int permutation(int n,int r)
{

    return fact(n)/fact(n-r);
}
int main()
{
    int n,r;

    printf("Enter the values of n and r respectively\n");
    scanf("%d%d",&n,&r);

    printf("The number of arrangements one can make from %d items and %d selected at a time = %d",n,r,permutation(n,r));

    return 0;
}
