// Write a C++ program to overload unary operators that is increment and decrement.

#include<iostream>

using namespace std ;

class Overload
{
public :
    int value1 ;

    Overload(int a)
    {
        value1 = a ;
    }

    Overload()
    {

    }

    void display()
    {
        cout << "Value = " << value1 << endl ;
    }

    void operator++()
    {
        value1 = value1 + 3 ;
    }

    void operator--()
    {
        value1 = value1 - 3 ;
    }

};
int main()
{
    Overload o1(3),o2(9) ;

    ++o1 ;
    o1.display();

    --o2 ;
    o2.display();

    return 0;
}
