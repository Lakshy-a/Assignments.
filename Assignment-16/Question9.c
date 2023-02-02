// Write a program in C to accept a matrix and determine whether it is a sparse matrix.

#include<stdio.h>

int main()
{
    int i,j,a[3][3],count=0;

    printf("Enter the elements in the matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]==0){
                count++;
            }
        }
    }

    if(count>4)
        printf("Given matrix is sparse\n");
    else
        printf("Given matrix is dense\n");

    return 0;
}

