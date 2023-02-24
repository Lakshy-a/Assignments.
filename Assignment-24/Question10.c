// Write functions using function overloading to add two numbers having different data
// types.

#include<iostream>

using namespace std;

void add(int a, int b)
{
    cout << "Sum = " << a+b << endl;
}

void add(double a, double b)
{
    cout << "Sum : " << a+b;
}

int main()
{
    add(1,8);
    add(2.7,5.8);

    return 0;
}
