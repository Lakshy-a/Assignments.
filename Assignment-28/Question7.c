// Create an Integer class and overload not operator for that class.

#include<iostream>

using namespace std ;

class Integer
{
    int num ;
public :
    void  setData(int x )
    {
        num = x ;
    }
    void showData()
    {
        cout << "Number is = " << num << endl ;
    }

    Integer operator!()
    {
        Integer temp ;
        temp.num = -num ;

        return temp ;
    }
};

int main()
{
    Integer i1,i2 ;

    i1.setData(5) ;
    i1.showData() ;

    i2 = !i1;

    i2.showData();

    return 0;
}
