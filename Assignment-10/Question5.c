// function to print first N odd natural numbers. (TSRN)
#include<stdio.h>

void oddnatural(int n)
{
    for(int i=1;i<=n*2;i++){
        if(i%2!=0)
            printf("%d ",i);
    }
}

int main()
{
    int n;

    printf("Enter the number of odd natural numbers to be printed : ");
    scanf("%d",&n);

    oddnatural(n);

    return 0;
}
