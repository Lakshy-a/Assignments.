// Define a function to calculate x raised to the power y.
#include<iostream>

using namespace std ;

class power
{
    public :
    int x,y ;

    int raisedpower()
    {
        int i=1;

        while(y>0){
            i = i*x ;
            y--;
        }
        return i;
    }
};

int main()
{
    power p;

    cout << "Enter the number and power to which it should be raised : " << endl ;
    cin>>p.x>>p.y ;

    cout << p.x << " raised to the power " << p.y << " = " << p.raisedpower() ;

    return 0;
}
