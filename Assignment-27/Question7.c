/* Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>. */

#include<iostream>

using namespace std ;

class Fraction
{
    long numerator ;
    long denominator ;

public :
    Fraction(long n, long d)
    {
        numerator = n ;
        denominator = d ;
    }

    Fraction()
    {

    }

    void display()
    {
        cout << numerator << "/" << denominator << endl ;
    }

    Fraction operator++()
    {
        Fraction temp ;

        temp.numerator = ++numerator ;
        temp.denominator = ++denominator ;

        return temp ;
    }

    Fraction operator++(int)
    {
        Fraction temp ;

        temp.numerator = numerator++ ;
        temp.denominator = denominator++ ;

        return temp ;
    }

    friend ostream& operator<<(ostream& os, Fraction f);
    friend istream& operator>>(istream& is, Fraction f);

};

ostream& operator<<(ostream& os, Fraction f)
{
    os << f.numerator << "/" << f.denominator << endl ;

    return os ;
}

int main()
{
    long a, b ;

    cout << "Enter 1st Fraction Value" <<  endl ;
    cout << "Numerator : " ;
    cin >> a ;
    cout << "Denominator : " ;
    cin >> b ;

    Fraction f1(2,3),f2;

    f2 = ++f1;
    cout << "f++ : " ;
    cout << f1 ;
    f2 = f1++ ;
    cout << "++f : " ;
    cout << f1 ;

    f2 = ++f1 ;

    cout << f1 ;
    cout << f2 ;
    cout << endl ;

    f2 = f1++ ;

    cout << f1 ;
    cout << f2 ;


    return 0;
}
