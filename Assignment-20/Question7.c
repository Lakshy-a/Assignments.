// Write a program to count the number of vowels and consonants in a string using a pointer.

#include<stdio.h>

int main()
{
     char arr[8] = "Lakshya";
     char *ptr = arr;

     int i,a=0,b=0;

     for(i=0;*(ptr+i)!='\0';i++){
        if(*(ptr+i)=='A' || *(ptr+i)=='E' || *(ptr+i)=='I' || *(ptr+i)=='O' || *(ptr+i)=='U' || *(ptr+i)=='a' || *(ptr+i)=='e' || *(ptr+i)=='i' || *(ptr+i)=='o'|| *(ptr+i)=='u' )
            a++;
        else
            b++;
     }

     printf("Number of vowels in the given string = %d",a);
     printf("\nNumber of consonents in the given string = %d\n\n",b);

    return 0;
}
