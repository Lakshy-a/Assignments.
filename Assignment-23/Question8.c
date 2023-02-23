// Write a C++ program to swap values of two int variables without using third variable

#include<iostream>

using namespace std;

int main()
{
    int a,b ;

    cout << "Enter two numbers : " ;
    cin >> a >> b;

    cout << "Before Swapping : a = " << a << " and b = " << b << "\n" ;

    a = a+b ;
    b = a - b;
    a = a-b ;

    cout << "After Swapping : a = " << a << " and b = " << b;

    return 0;
}





