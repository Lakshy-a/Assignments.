// program to check whether a given number is an Armstrong number or not
#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,count=0,rem,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        count+=1;
        temp=temp/10;
    }
    temp=n;
    printf("Number of digits in %d = %d",n,count);

    while(temp>0){
        rem=temp%10;
        sum=sum+pow(rem,count);
        temp/=10;
    }
    if(n==sum){
        printf("\n%d is an armstrong number",n);
    }
    else
        printf("\n%d is not an armstrong number",n);
    return 0;
}
