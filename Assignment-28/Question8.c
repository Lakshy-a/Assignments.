/* Create a Coordinate class for 3 variables x,y and z and overload comma operator such
that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and c3 are
objects of 3D coordinate class. */

#include<iostream>

using namespace std ;

class Coordinate
{
   int x,y,z ;
   public :
        Coordinate(int a, int b, int c)
        {
            x = a ;
            y = b ;
            z = c ;
        }

        Coordinate()
        {

        }

        void display()
        {
            cout << "x = " << x << endl ;
            cout << "y = " << y << endl ;
            cout << "z = " << z << endl << endl << endl ;
        }

        Coordinate operator,(Coordinate c1)
        {
            Coordinate temp ;

            temp.x = c1.x ;
            temp.y = c1.y ;
            temp.z = c1.z ;

            return temp ;
        }
};

int main()
{
    Coordinate c2(1,2,3) ;
    Coordinate c3(4,5,6) ;
    Coordinate c4 ;


    c2.display();
    c3.display();

    c4 = (c2,c3) ;
    c4.display();

    return 0;
}
