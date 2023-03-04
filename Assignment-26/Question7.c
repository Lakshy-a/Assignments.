// Define a class Box and write a program to enter length, breadth and height and initialise
// objects using constructor also define member functions to calculate volume of the box.

#include<iostream>

using namespace std ;

class Box
{
    int l,br,h,volume ;
public :
    Box(int a, int b, int c)
    {
        l = a ;
        br = b ;
        h = c ;
    }

    void Volume()
    {
        volume = l*br*h ;
    }

    void showVolume()
    {
        cout << "Volume of the box = " << volume ;
    }
};

int main()
{
    Box b(2,3,4) ;
    b.Volume();
    b.showVolume() ;

    return 0;
}
