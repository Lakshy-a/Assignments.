#include<stdio.h>

int main()
{
    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<=4+i;j++){
            if(j+i>=4)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for(i=0;i<4;i++){
        for(j=0;j<=6-i;j++){
            if(j>=i)
                printf(" *");
          else
               printf("   ");
        }
        printf("\n");
    }
    return 0;
}
