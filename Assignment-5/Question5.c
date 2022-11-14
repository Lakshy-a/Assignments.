// program to print the first N odd natural numbers in reverse order
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("First N odd natural numbers in reverse order are\n");
    for(int i = n*2;i>0;i--){
        if(i%2!=0){
        printf("%d,",i);
      }
    }
    return 0;
}
