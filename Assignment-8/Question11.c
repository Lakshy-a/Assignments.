#include<stdio.h>

int main()
{
    int i,j;
    char count='A';

    for(i=0;i<4;i++){
        for(j=0,count='A';j<=3+i;j++){
            if((j>=3-i) )
                {
                    printf("%c ",count);
                    if(j<3)
                        count++;
                    else
                        count--;
                }
            else
               printf("  ");
        }
        printf("\n");
    }
    return 0;
}

