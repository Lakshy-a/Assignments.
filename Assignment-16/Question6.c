// Write a program in C to find the sum of rows and columns of a Matrix.

#include<stdio.h>

int main()
{
    int i,j,sum=0,a[3][3];

    printf("Enter the elements in the matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum += a[i][j];
        }
        printf("Sum of row %d is %d\n",i,sum);
        sum=0;
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum += a[j][i];
        }
        printf("Sum of column %d is %d\n",i,sum);
        sum=0;
    }

    return 0;
}
