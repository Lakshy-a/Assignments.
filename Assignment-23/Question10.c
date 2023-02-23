// Write a C++ program to add all the numbers of an array of size 10.

#include<iostream>

using namespace std;

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},sum=0,i ;

    for(i=0;i<10;i++)
        sum += a[i];

    cout << "Sum of all the elements in the array = " << sum ;

    return 0;
}







