// Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class.

#include<iostream>

using namespace std ;

class LargestNumber
{
    int a,b,c,largest ;

public :
    LargestNumber(int x,int y,int z)
    {
        a = x ;
        b = y ;
        c = z ;
    }

    void Largest()
    {
        if(a>b && a>c)
            largest = a;
        else if (b>c)
            largest = b ;
        else
            largest = c ;
    }

    void display()
    {
        cout << "Largest among " << a << "," << b << " and " << c << " is = " << largest ;
    }

};
int main()
{
    LargestNumber l(3,1,9);
    l.Largest();
    l.display();

    return 0 ;
}
