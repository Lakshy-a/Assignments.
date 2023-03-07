/* Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings. */

#include<iostream>

using namespace std ;

class CString
{
    string s1 ;

public :
    CString(string x)
    {
        s1 = x ;
    }

    CString()
    {

    }

    void display()
    {
        cout << s1 << endl ;
    }

    CString operator+(CString t)
    {
        CString temp ;
        temp.s1 = s1 + t.s1 ;

        return temp ;
    }

    bool operator==(CString t)
    {
        if(s1 == t.s1)
            return true ;
        else
            return false ;
    }

};

int main()
{
    CString c1("Lakshya"),c2("Gupta"),c3 ;

    c3 = c1 + c2 ;
    c3.display();
    cout << (c1 == c2) ;

    return 0;
}
