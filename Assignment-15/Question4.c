// Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right.

#include<stdio.h>

void rotate(int [],int);

int main()
{
    int a[20],n,i;

    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    rotate(a,n);

    return 0;
}

void rotate(int a[],int n)
{
    int Choice,i,j,d,x;

    printf("Choose to which side you want to rotate the array\n\n");
    printf("Press 1 for right rotation and Press 0 for left rotation ");
    scanf("%d",&Choice);

    printf("Enter the position from where you want to rotate the array : ");
    scanf("%d",&d);

    if(Choice==1){
        for(i=1;i<=d;i++){
            x = a[n-1];
            for(j=n-1;j>0;j--){
                a[j]=a[j-1];
            }
            a[0]=x;
        }
    }
    else{
        for(i=1;i<=d;i++){
            x = a[0];
            for(j=0;j<n;j++){
                a[j]=a[j+1];
            }
            a[n-1]=x;
        }
    }

    printf("Rotated array is ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n\n\n");
}
