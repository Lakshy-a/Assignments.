// Write a program in C to find the sum of right diagonals of a matrix.

#include<stdio.h>

int main()
{
    int a[3][3],sum=0,i,j;

    printf("Enter the elements in the matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i+j==2)
                sum+=a[i][j];
        }
    }

    printf("Sum of the elements of right diagonal = %d",sum);

    return 0;
}
