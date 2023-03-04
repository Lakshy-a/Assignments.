/* Define a class Complex to represent a complex number with instance variables a and b
to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex) */

#include<iostream>

using namespace std ;

class Complex
{
    int real,imaginary,sum=0 ;

public :
    void setData(int a, int b)
    {
        real = a;
        imaginary = b ;
    }

    Complex()
    {

    }


    void showData()
    {
        cout << "Number = " << real << " + " << imaginary << "i" << endl ;
    }

    Complex add(Complex c1)
    {
        c1.real  = real + c1.real ;
        c1.imaginary = imaginary + c1.imaginary ;
        return c1 ;
    }
};

int main()
{
    Complex c2 , c3 , c4 ;
    c2.setData(2,3) ;
    c3.setData(4,5) ;
    c2.showData();
    c3.showData();

    c4 = c2.add(c3) ;

    c4.showData() ;

    return 0;
}
