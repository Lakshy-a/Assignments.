// Write a function using the default argument that is able to add 2 or 3 numbers.

#include<iostream>

using namespace std ;

class Add
{
    public :
    int x,y,z;

    Add(int a ,int b)
    {
        x = a;
        y = b;

        cout << "Sum : " << x+y << endl ;
    }

    Add(int a , int b, int c)
    {
        x = a;
        y = b;
        z = c;
        cout << "Sum = " << x+y+z ;
    }


};

int main()
{
    Add a(2,3) ;
    Add b(2,3,4);


    return 0;
}
