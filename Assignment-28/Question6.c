// Create a complex class and overload assignment operator for that class.

#include<iostream>

using namespace std ;

class Complex
{
    int r,i ;
public :
    void setData(int x, int y)
    {
        r = x ;
        i = y ;
    }

    void showData()
    {
        cout << "Number is : " << r << " + " << i << "i" ;
    }

    Complex operator=(Complex c)
    {
        r = c.r ;
        i = c.i ;

        return c ;
    }
};

int main()
{
    Complex c1,c2 ;

    c1.setData(2,3);
    c1.showData();

    c2 = c1 ;
    c2.showData();

    return 0;
}
