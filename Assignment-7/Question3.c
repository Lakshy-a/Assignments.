// program to check whether a given number is there in the Fibonacci series or not.
#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
      c=a+b;
      if(a==n || c==n){
        printf("%d is there in the Fibonacci Series",n);
        break;
      }
      else{
        printf("%d is not there in the Fibonacci Series ",n);
        break;
      }
      a=b;
      b=c;
    }
    return 0;
}
