#include<iostream>

using namespace std ;

class Complex
{
    int real,imaginary ;

public:
    void setR(int a)
    {
        real = a ;
    }
    void setI(int b)
    {
        imaginary = b ;
    }

    int getR()
    {
        return real ;
    }
    int getI()
    {
        return imaginary ;
    }
};

int main()
{
    Complex c ;
    int x,y ;

    cout << "Enter the real part of the complex number : " ;
    cin >> x ;
    c.setR(x);
    cout << "Enter the imaginary part of the complex number : " ;
    cin >> y ;

    c.setI(y) ;

    int a,b ;

    a = c.getR() ;
    b = c.getI() ;

    cout << "Number is = " << a << " + " << b << "i" ;


    return 0;
}
