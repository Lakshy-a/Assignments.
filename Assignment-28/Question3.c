// Overload subscript operator [] that will be useful when we want to check for an index out
// of bound.

#include<iostream>

using namespace std ;

class Array
{
    int arr[100] ;
    const int size = 100 ;

public :
    void setData(int x, int n)
    {
        if(x>=size){
            cout << "Array index out of bound exception" << endl ;
            exit(0);
        }
        arr[x] = n ;
    }

    int operator[](int x)
    {
        if(x>=size){
            cout << "Array index out of bound exception" << endl ;
            exit(0);
        }
        return arr[x] ;
    }
};

int main()
{
    Array a1,a2;

    a1.setData(5,67);
    cout << a1[5] << endl;

    a2.setData(100,1) ;

    return 0;
}
