// Write a program in C to print or display the lower triangular of a given matrix.

#include<stdio.h>

int main()
{
    int i,j,a[3][3];

    printf("Enter the elements in the matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i<j){
                a[i][j]=0;
            }
        }
    }

    printf("Lower triangular matrix of the givem matrix is\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
