#include<stdio.h>

int main()
{
    int i,j;
    char count='A'-1;

    for(i=0;i<4;i++){
        for(j=0,count='A'-1;j<=6-i;j++){
            if(j>=i){
                if(j<=3)
                       count++;
                    else
                       count--;
                    printf("%c ",count);

            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

