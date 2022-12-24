#include<stdio.h>

int main()
{
    int i,j,count='A';

    for(i=0;i<7;i++){
        for(j=0,count='A';j<13;j++){
            if(j==7 && i==0){
                count=count-2;
                printf("%c ",count);
            }
            else if(j >= 0 && j <= 6-i)
                printf("%c ",count++);
            else if(j >= 6+i && j <= 12)
                printf("%c ",--count);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

