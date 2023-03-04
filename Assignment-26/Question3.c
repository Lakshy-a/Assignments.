// Define a class Cube and calculate Volume of Cube and initialise it using constructor.

#include<iostream>

using namespace std ;

class Cube
{
    int side,volume=0 ;

public :
    Cube(int a)
    {
        side = a ;
    }

    void Volume()
    {
        volume = side*side*side ;
    }

    void show()
    {
        cout << "Volume of the cube = " << volume << endl ;
    }
};

int main()
{
    Cube c(4) ;
    c.Volume() ;
    c.show() ;

    return 0;
}
