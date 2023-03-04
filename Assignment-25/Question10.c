// Define a class Area and define instance member functions to find the area of the
// different shapes like square, rectangle , circle etc.

#include<iostream>

using namespace std ;

class Area
{
    int a,b,area ;

public :
    Area(int x , int y = 0)
    {
        a = x ;
        b = y ;
    }

    void square()
    {
        area = a*a ;
    }

    void rectangle()
    {
        area = a*b ;
    }

    void circle()
    {
        area = 3.14*a*a ;
    }

    void display()
    {
        cout << "Area = " << area  << endl ;
    }
};
int main()
{
    Area a(4);
    a.square();
    a.display();
    Area b(3,4) ;
    b.rectangle();
    b.display();
    Area c(7);
    c.circle();
    c.display() ;
    return 0;
}
