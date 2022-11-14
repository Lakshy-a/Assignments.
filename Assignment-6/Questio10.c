// program to reverse a given number
#include<stdio.h>
int main()
{
    int n,rem,temp,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        rem=n%10;
        sum=10*sum+rem;
        n=n/10;
    }
    printf("%d becomes %d after reversing it.",temp,sum);
    return 0;
}
