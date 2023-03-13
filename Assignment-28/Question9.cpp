// Create an Integer class that contains int x as an instance variable and overload
// casting int() operator that will type cast your Integer class object to int data type.

#include<iostream>

using namespace std ;

class Integer
{
private :
    int x ;
public :
    Integer(int a)
    {
        x = a ;
    }

    operator int()
    {
        return x ;
    }

    void display()
    {
        cout << x << endl ;
    }

};

int main()
{
    Integer i = 5 ;

    int j = i ;

    cout << j ;

    return 0;
}
