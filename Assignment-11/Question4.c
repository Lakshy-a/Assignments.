// function to find the next prime number of a given number. (TSRS)
#include<stdio.h>

int nextprime(int n)
{
    int i,j,count=0 ;
    for(i=n+1; ;i++){
        for(j=1;j<=i ;j++){
            if(i%j==0){
                count++ ;
           }
        }
        if(count==2){
         return i;
         break;
        }
        else
            count=0;
    }
}

int main()
{
    int n,x ;

    printf("Enter the number : ");
    scanf("%d",&n);

    x = nextprime(n);


    printf("The next prime number of %d = %d ",n,x);

    return 0;
}
