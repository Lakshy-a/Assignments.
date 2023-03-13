/* Create a class Marks that have one member variable marks and one member function
that will print marks. We know that we can access member functions using (.) dot operator. Now
you need to overload (->) arrow operator to access that function. */

#include<iostream>

using namespace std ;

class Marks
{
    int marks ;
public :
    Marks(int marks)
    {
        this->marks = marks ;

    }

    Marks()
    {

    }

    void display()
    {
        cout << "Marks = " << marks << endl ;
    }

    Marks *operator->()
    {
        return this ;
    }
};

int main()
{
    Marks m(5) ;

    m.display();
    m->display();

    return 0 ;
}
