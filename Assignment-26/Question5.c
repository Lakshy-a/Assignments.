// Define a class Date and write a program to Display Date and initialise date object using
// Constructors.

#include<iostream>

using namespace std ;

class Date
{
    int date,month,year ;
public :
    Date(int a, int b, int c)
    {
        date = a;
        month = b;
        year = c ;
    }

    void show()
    {
        cout << "Date is : " << date << "-" << month << "-" << year << endl ;
    }
};

int main()
{
    Date d(1,11,2002) ;

    d.show() ;

    return 0;
}
