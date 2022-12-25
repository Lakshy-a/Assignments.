// Write a function to print all Prime numbers between two given numbers. (TSRN)

#include<stdio.h>

void rangeprime(int n,int x)
{
    int i,j,count;
    for(i=n;i<=x;i++){
        count=1;
        for(j = 2;j <= i / 2; ++j){
        if(i % j == 0){
           count = 0;
           break;
        }
      //  else
        //   count=0;
       }
     if(count == 1)
        printf("%d ",i);
    }
}

int main()
{
    int n,x;

    printf("Enter the range \n");
    scanf("%d %d",&n,&x);

    rangeprime(n,x);

    return 0 ;
}
