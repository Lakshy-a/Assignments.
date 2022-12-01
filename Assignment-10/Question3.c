// function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0. (TSRS)
#include<stdio.h>

int evenodd(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;

}
int main()
{
    int n;

    printf("Enter the  number : ");
    scanf("%d",&n);

    evenodd(n) ? printf("%d is an even number",n) : printf("%d is an odd number",n);

    return 0;
}
