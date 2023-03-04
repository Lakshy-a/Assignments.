// Define a class Rectangle and define an instance member function to find the area of the
// rectangle.

#include<iostream>

using namespace std ;

class Rectangle
{
    int length,breadth,area = 0 ;

public :
    Rectangle(int a, int b)
    {
        length = a ;
        breadth = b ;
    }

    void areaa()
    {
        area = length*breadth ;
    }

    void display()
    {
        cout << "Area = " << area ;
    }

};

int main()
{
    Rectangle r(2,7) ;
    r.areaa() ;
    r.display() ;

    return 0;
}
