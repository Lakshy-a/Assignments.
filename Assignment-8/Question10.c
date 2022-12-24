#include<stdio.h>

int main()
{
    int i,j,count=1;

    for(i=0;i<4;i++){
        for(j=0,count=1;j<7;j++){
            if(j==4 && i==0){
                count=count-2;
                printf("%d ",count);
            }
            else if(j >= 0 && j <= 3-i)
                printf("%d ",count++);
            else if(j >= 3+i && j <= 6)
                printf("%d ",--count);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
