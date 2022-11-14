//Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char d;
    printf("Size of integer variable is = %d",sizeof(a));
    printf("\nSize of float variable is = %d",sizeof(b));
    printf("\nSize of double variable is = %d",sizeof(c));
    printf("\nSize of char variable is = %d",sizeof(d));
    return 0;
}
