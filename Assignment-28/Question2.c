/* Define a class Complex with appropriate instance variables and member functions. One
of the functions should be setData() to set the properties of the object. Make sure the
names of formal arguments are the same as names of instance variables. */

#include<iostream>

using namespace std ;

class Complex
{
    int real,imaginary ;
public :

    void setData(int real, int imaginary)
    {
        this->real = real ;
        this->imaginary = imaginary;
    }

    void getData()
    {
        cout << "Number is : " ;
        cout << real << " + " << imaginary << "i" ;
    }

};

int main()
{
    Complex c1 ;

    c1.setData(2,3);
    c1.getData();

    return 0;
}
