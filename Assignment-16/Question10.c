// Write a program in C to find the row with maximum number of 1s.

#include<stdio.h>

int main()
{
    int i,j,a[3][3],row,count,max;

    printf("Enter the elements in the matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<3;i++){
        count=0;
        for(j=0;j<3;j++){
            if(a[i][j]==1)
                count++;
        }
        if(count>max){
            max=count;
            row=i;
        }
    }

    printf("%d row has the maximum number of 1s : %d",row,max);

    return 0;
}
