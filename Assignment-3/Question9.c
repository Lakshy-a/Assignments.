// Program to find the greatest among three given numbers. Print number once
// if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter three numbers :");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x>z) {
        printf("The greatest among three given numbers = %d",x);
    }
    else if(y>z) {
        printf("The greatest among three given numbers = %d",y);
    }
    else if((x==y) || (y==z) || (z==x))
        printf("Number is repeated");
    else{
        printf("The greatest among three given numbers = %d",z);
    }
    return 0;
}
