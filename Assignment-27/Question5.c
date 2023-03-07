/* Consider following class Numbers
class Numbers
{

int x,y,z;
public:
// methods
};
Overload the operator unary minus (-) to negate the numbers. */

#include<iostream>

using namespace std ;

class Numbers
{
    int x,y,z ;
public:
    Numbers(int a, int b , int c )
    {
        x =  a ;
        y = b ;
        z = c ;
    }

    void show()
    {
        cout << "Numbers are : " << x << "," << y << "," << z;
    }

    operator-()
    {
        x = -x ;
        y = -y ;
        z = -z ;
    }

};

int main()
{
    Numbers n1(2,3,4) ;

    -n1 ;
    n1.show();

    return  0;
}

