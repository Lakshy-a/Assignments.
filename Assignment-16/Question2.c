// Write a program to calculate the product of two matrices each of order 3x3.

#include<stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3],sum,i,j,k;

    printf("Enter the elements in the first matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }

    printf("Enter the elements in the second matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum=0;
            for(k=0;k<3;k++){
            sum += a[i][k]*b[k][j];
            c[i][j]=sum;
            }
        }
    }

    printf("Product matrix is\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
