// Program to Convert even number into its upper nearest odd number Switch Statement

#include<stdio.h>
int main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d",&n);

    switch (n%2 == 0)
    {
    case 1 :
        printf("%d\n\n",n+1);
        break;
    case 0 :
        printf("%d\n\n",n);
        break;
    }

    return 0;
}
