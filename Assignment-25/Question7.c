// Define a class Greatest and define instance member function to find Largest among 3
// numbers using classes.

#include<iostream>

using namespace std ;

class Greatest
{
    int a,b,c,large=0 ;

public :
    Greatest(int x, int y, int z)
    {
        a = x ;
        b = y ;
        c = z ;
    }

    void greatest()
    {
       large = ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c )) ;
    }

    void display()
    {
         cout << "Greatest among " << a << "," << b << " and " << c << " = " << large ;
    }
};

int main()
{
    Greatest g(2,0,9) ;
    g.greatest();
    g.display();

    return 0;
}
