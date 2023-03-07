/* Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object. */

#include<iostream>

using namespace std ;

class Matrix
{
    int a[3][3] ;
public :

    void setElements()
    {
        int i,j ;
        cout << "Enter the elements " << endl ;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                cin >> a[i][j];
            }
        }
    }

    void getElements()
    {
        int i,j ;
        cout << "Matrix is : " << endl ;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                cout << a[i][j] << "    " ;
            }
            cout << endl ;
        }
    }

    void operator-()
    {
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                a[i][j] = -a[i][j];
            }
        }
    }
};

int main()
{
    Matrix m1 ;

    m1.setElements();
    m1.getElements();

    -m1;
    m1.getElements();

    return 0;
}
