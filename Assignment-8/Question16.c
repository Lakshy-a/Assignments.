#include<stdio.h>

int main()
{
    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<9;j++){
            if((i==4) || (j==4-i) || (j-i==4))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

