// Write functions using function overloading to find a maximum of two numbers and both
// the numbers can be integer or real.

#include<iostream>

using namespace std ;

void maximum(int x, int y)
{
    if(x > y)
        cout << "Maximum is = " << x << endl ;
    else
        cout << "Maximum is = " << y << endl ;
}

void maximum(double x, double y)
{
    if(x > y)
        cout << "Maximum is = " << x << endl ;
    else
        cout << "Maximum is = " << y << endl ;
}

int main()
{
    maximum(2,7);

    maximum(5.9,1.9);

    return 0;
}
