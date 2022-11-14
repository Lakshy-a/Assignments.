// program to count digits in a given number
#include<stdio.h>
int main()
{
    int n,count=0,temp;
    printf("Enter the number : ");
    scanf("%d",&n);
    temp = n;
    while(n>0){
        n=n/10;
        count+=1;
    }
    printf("Number of digits in %d = %d",temp,count);
    return 0;
}
