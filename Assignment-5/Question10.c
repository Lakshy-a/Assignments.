// program to print a table of N
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number whose table is to be printed : ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        if(n==5 && i==6)
            continue;
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}
