// Define a class Factorial and define an instance member function to find the Factorial of a
// number using class.

#include<iostream>

using namespace std ;

class Factorial
{
    int n ;
    int fac ;
public :
    Factorial(int a)
    {
        n = a ;
    }

    void fact()
    {
        fac = 1;
        for(int i=1 ;i <= n;i++){
            fac = fac*i ;
        }
    }

    void display()
    {
        cout << "Factorial of " << n << " = " << fac ;
    }
};

int main()
{
    Factorial f(5) ;
    f.fact() ;
    f.display() ;
    return 0 ;
}
