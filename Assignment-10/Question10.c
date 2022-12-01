// function to print all prime factors of a given number. For example, if the
// number is 36 then your result should be 2, 2, 3, 3.

#include<stdio.h>

void primefactor(int n)
{
    int i ;

    for(i=2 ; i<=n; i++){
        while(n%i == 0){
            printf("%d ",i);
            n = n/i;
        }
    }
}

int main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d",&n);

    primefactor(n);

    return 0;
}
