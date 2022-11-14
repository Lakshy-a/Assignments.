// program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int a=0,b=1,c;
    if(n==1)
        printf("%d",a);
    else if(n==2){
        printf("%d ",a);
        printf("%d ",b);
    }
    else{
        printf("%d ",a);
        printf("%d ",b);
        for(int i=3;i<=n;i++){
            c=a+b;
            printf("%d ",c);
            a=b;
            b=c;
        }
    }
    return 0;
}
