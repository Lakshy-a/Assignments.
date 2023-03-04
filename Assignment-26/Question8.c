/* Define a class Bank and define member functions to read principal , rate of interest and
year. Another member functions to calculate simple interest and display it. Initialise all details
using constructor. */

#include<iostream>

using namespace std ;

class Bank
{
    float p,r,t;
    float SI ;
public :
    Bank(int a, int b, int c)
    {
        p = a ;
        r = b ;
        t = c ;
    }

    void simpleinterest()
    {
        SI = (p*r*t)/100;
    }

    void display()
    {
        cout << "Simple Interest = " << SI << endl ;
    }
};

int main()
{
    Bank b(234,345,456);
    b.simpleinterest();
    b.display();

    return 0;
}
