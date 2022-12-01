// function to print first N natural numbers (TSRN)
#include<stdio.h>

void naturalnumbers(int n)
{
    for(int i =1;i<=n;i++){
        printf("%d ",i);
    }
}
int main()
{
    int n ;

    printf("Enter the number : ");
    scanf("%d",&n);

    naturalnumbers(n);

    return 0;
}
