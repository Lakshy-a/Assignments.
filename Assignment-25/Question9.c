// Define a class Circle and define an instance member function to find the area of the
// circle.

#include<iostream>

using namespace std ;

class Circle
{
    float radius,area = 0 ;

public :
    Circle(float r)
    {
        radius = r ;
    }

    void areaa()
    {
        area = 3.14*(radius*radius) ;
    }

    void display()
    {
        cout << "Area = " << area ;
    }
};
int main()
{
    Circle c(7) ;
    c.areaa() ;
    c.display() ;

    return 0;
}
