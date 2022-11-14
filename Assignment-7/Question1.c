// program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
       if(n==1){
        printf("%d",a);
       }
       else if(n==2){
        printf("%d",b);
       }
       else{
       c=a+b;
       a=b;
       b=c;
       }
}
    printf("%d th term of fibonacci series = %d",n,c);
    return 0;
}
