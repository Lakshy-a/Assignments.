// program to print all Armstrong numbers under 1000
#include<stdio.h>
#include<math.h>
int main()
{
    int i,temp,rem,sum=0,count=0;
    for(i=1;i<=1000;i++){
            temp=i;
            while(temp>0){
                count=count+1;
                temp/=10;
            }
            temp=i;
            while(temp>0){
                rem=temp%10;
                sum+=pow(rem,count);
                temp/=10;
            }
            if(sum==i)
                printf("%d ",i);
            sum=0;
            count=0;
    }
    return 0;
}
