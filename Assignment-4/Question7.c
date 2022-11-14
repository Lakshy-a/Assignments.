// Program to print the first 10 even natural numbers in reverse order
#include<stdio.h>
int main()
{
    printf("First 10 even natural numbers in reverse order");
    for(int i=22;i>0;i--){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}
