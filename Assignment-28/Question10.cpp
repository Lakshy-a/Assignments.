/* Create a Distance class having 2 instance variable feet and inches. Also create default
constructor and parameterized constructor takes 2 variables . Now overload () function call
operator that takes 3 arguments a , b and c and set feet = a + c + 5 and inches = a+b + 15. */

#include<iostream>

using namespace std ;

class Distance
{
    int feet, inches ;
public :
    Distance()
    {

    }

    Distance(int feet, int inches)
    {
        this->feet = feet ;
        this->inches = inches ;
    }

    Distance operator ()(int a, int b, int c)
    {
        Distance t ;

        t.feet = a+c+5 ;
        t.inches = a+b+15 ;

        return t ;
    }

    void display()
    {
        cout << "feet = " << feet << endl ;
        cout << "inches = " << inches << endl ;
    }
};

int main()
{
    Distance d1(2,3),d2 ;
    d1.display();

    d2 = d1(2,3,4);
    d2.display();

    return 0 ;
}
