/* Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==  */

#include<iostream>

using namespace std ;

class Complex
{
public :
    int real,imaginary ;

    Complex(int a, int b)
    {
        real = a ;
        imaginary = b ;
    }

    Complex()
    {

    }

    void display()
    {
        cout << "Number is = " << real << " + " << imaginary << "i" << endl ;
    }

    Complex operator+(Complex t)
    {
        Complex temp ;
        temp.real = real + t.real ;
        temp.imaginary = imaginary + t.imaginary ;

        return temp ;
    }

    Complex operator-(Complex t)
    {
        Complex temp ;
        temp.real = real - t.real ;
        temp.imaginary = imaginary - t.imaginary ;

        return temp ;
    }

    Complex operator*(Complex t)
    {
        Complex temp ;
        temp.real = real * t.real ;
        temp.imaginary = imaginary * t.imaginary ;

        return temp ;
    }

    bool operator==(Complex t)
    {
        if(real == t.real && imaginary == t.imaginary)
            return true ;
        else
            return false ;

    }
};
int main()
{
    Complex c1(2,3),c2(4,5),c3 ;

    c3 = c1 + c2 ;
    c3.display();

    c3 = c1 - c2 ;
    c3.display();

    c3 = c1 * c2 ;
    c3.display();

    cout << (c1 == c2) ;
   // c3.display();

    return 0;
}
