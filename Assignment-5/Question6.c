// program to print the first N even natural numbers
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("First N even natural numbers\n");
    for(int i = 1;i<=n*2;i++){
        if(i%2==0){
        printf("%d ",i);
      }
    }
    return 0;
}
