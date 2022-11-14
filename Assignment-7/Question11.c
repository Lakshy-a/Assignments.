// program to find the position of first 1 in LSB
#include<stdio.h>
int main()
{
    int a,count=0;

    printf("Enter the number : ");
    scanf("%d",&a);

    while(a>0){
        a=a>>1;
        count=count+1 ;
    }
    printf("Position of first 1 in LSB = %d",count);

    return 0;
}
