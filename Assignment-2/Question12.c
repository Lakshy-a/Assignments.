//program to take a three digit number from the user and rotate its digits by
//one position towards the right.
#include<stdio.h>
int main()
{
    int n,rem,temp;
    printf("Enter the three digit number : ");
    scanf("%d",&n);
    temp = n;
    rem = n%10;
    n = n/10;
    rem = rem*100 + n;
    printf("%d becomes %d after rotating it by one digit towards the right",temp,rem);
    return 0;
}
