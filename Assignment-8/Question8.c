#include<stdio.h>

int main()
{
    int i,j,count=1;

    for(i=0;i<4;i++){
        for(j=0,count=1;j<=3+i;j++){
            if((j>=3-i) )
                {
                    printf("%d",count);
                    if(j<3)
                        count++;
                    else
                        count--;
                }
            else
               printf(" ");
        }
        printf("\n");
    }
    return 0;
}
