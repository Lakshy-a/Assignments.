// program to find next Prime number of a given number
#include<stdio.h>
int main()
{
    int a,i,j,count=0;
    printf("Enter the number \n");
    scanf("%d",&a);

    for(i=a+1; ;i++){
        for(j=1;j<=i;j++){
            if(i%j==0)
            {
              count++;
            }
         }
        if(count==2){
               printf("%d ",i);
               break;
            }
        else{
            count = 0;
        }
     }

    return 0;
}
