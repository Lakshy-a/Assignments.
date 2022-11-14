// program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Squares of the first N natural numbers are \n");
    for(int i=1;i<=n;i++){
        printf("%d\n",i*i);
    }
    return 0;
}
