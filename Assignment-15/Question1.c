// Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>

int findgreatest(int [],int);

int main()
{
    int a[20],n,i;

    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Greatest element in the given array is %d\n\n",findgreatest(a,n));

    return 0;
}

int findgreatest(int a[],int n)
{
    int largest=-1,i;

    for(i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }

    return largest;

}
