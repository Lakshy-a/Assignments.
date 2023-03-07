// Write a C++ program to add two complex numbers using operator overloaded by a friend
// function.

#include<iostream>

using namespace std ;

class Complex
{
    int real,imaginary ;

public :
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

    friend Complex operator+(Complex c1, Complex c2) ;
};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp ;
    temp. real = c1.real + c2.real ;
    temp.imaginary = c1.imaginary + c2.imaginary ;

    return temp ;
}

int main()
{
    Complex o1(2,3),o2(4,5),o3 ;

    o3 = o1 + o2 ;

    o3.display();

    return 0;
}
