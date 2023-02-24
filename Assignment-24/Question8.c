// Define overloaded functions to calculate area of circle, area of rectangle and area of
// triangle

#include<iostream>

using namespace std ;

void Area(float radius)
{
    cout << "Area of circle = " << 3.14*radius*radius << endl ;
}

void Area(float length , float breadth)
{
    cout << "Area of rectangle = " << length * breadth << endl ;
}

void Area(int base , int height)
{
    cout << "Area of triangle = " << (base*height)/2 << endl ;
}

int main()
{
    Area(7);
    Area(5,10);
    Area(1,2);

    return 0;
}
