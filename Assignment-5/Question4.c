// program to print the first N odd natural numbers
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("First N odd natural numbers\n");
    for(int i = 0;i<n*2;i++){
        if(i%2!=0){
        printf("%d,",i);
      }
    }
    return 0;
}
