#include<stdio.h>

int main()
{
    int i,j,count=0;

    for(i=0;i<4;i++){
        for(j=0,count=0;j<=6-i;j++){
            if(j>=i){
                if(j<=3)
                       count++;
                    else
                       count--;
                    printf("%d ",count);

            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
