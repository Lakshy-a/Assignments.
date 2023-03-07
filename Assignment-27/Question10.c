/* Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator overloading). */

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
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                cout << a[i][j] << "    " ;
            }
            cout << endl ;
        }
    }

    Matrix operator+(Matrix m)
    {
        Matrix temp ;

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                temp.a[i][j] = a[i][j] + m.a[i][j] ;
            }
        }
        return temp ;
    }
};

int main()
{
    Matrix m1,m2,m3 ;

    m1.setElements();
    cout << "First Matrix : " << endl ;
    m1.getElements();

    m2.setElements();
    cout << "Second Matrix : " << endl ;
    m2.getElements();

    cout << "addition of Matrix : " ;
    m3 = m1 + m2 ;
    m3.getElements();

    return 0;
}

