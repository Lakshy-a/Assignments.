// Define a class Square to find the square of a number and write a C++ program to Count
// number of times a function is called.

#include<iostream>

using namespace std ;

class Square
{
    static int count ;
    int num,s ;
public :
    Square(int x)
    {
        num = x ;
    }

    void square()
    {
        count ++ ;
        s = num*num ;
    }

    void display()
    {
        cout << "Square of " << num << " is = " << s << endl;
    }

    void printCount()
    {
        cout << "Count = " << count ;
    }
};

int Square :: count=0 ;
int main()
{
    Square s(5) ;
    s.square() ;
    s.display() ;
    s.printCount();

    return 0;
}
