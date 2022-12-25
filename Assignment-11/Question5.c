// function to print first N prime numbers (TSRN)
#include<stdio.h>

int Nprime(int n)
{
    int i,j,count=0 ;

    for(i=2;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i%j==0)
                count++;

        if(count==2)
            printf("%d ",i);
        else
            count==0;
        }
    }
}

int main()
{
    int n ;

    printf("Enter the number of terms to be there : ");
    scanf("%d",&n);

    Nprime(n);

    return 0;
}
