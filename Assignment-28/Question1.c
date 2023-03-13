/* Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator */

#include<iostream>

using namespace std ;

class Complex
{
    int real,imaginary;
public :

    friend ostream& operator<< (ostream& os, Complex& c) ;
    friend istream& operator>> (istream& is, Complex& c) ;

};

ostream& operator<< (ostream&  os, Complex& c)
{
    os << "The Number is : " ;
    os << c.real << " + " << c.imaginary << "i" << endl ;

    return os ;
}

istream& operator>> (istream&  is, Complex& c)
{
    cout << "Enter the real part : " ;
    is >> c.real ;
    cout << "Enter the imaginary part : " ;
    is >> c.imaginary ;

    return is ;
}

int main()
{
    Complex c1 ;

    cin >> c1 ;
    cout << c1 ;

    return 0 ;
}
