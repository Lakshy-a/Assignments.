// Write a function to print first N terms of Fibonacci series (TSRN)

#include<stdio.h>

void Fibonacci(int n)
{
    int a=0,b=1,c,i,j;
        printf("%d ",a);
        printf("%d ",b);
        for(i=2;i<n;i++){
        c = a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}

int main()
{
    int n;

    printf("Enter the number of terms : ");
    scanf("%d",&n);

    Fibonacci(n);

    return 0;
}


