// program to print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
    int a,b,i,j,count=0;
    printf("Enter the two numbers \n");
    scanf("%d%d",&a,&b);

    for(i=a;i<=b;i++){
        for(j=1;j<=i;j++){
            if(i%j==0)
            {
              count++;
            }
         }
        if(count==2){
               printf("%d ",i);
            }
        else{
            count = 0;
        }
     }

    return 0;
}
