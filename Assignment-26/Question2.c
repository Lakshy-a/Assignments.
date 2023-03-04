/* Define a class Time to represent a time with instance variables h,m and s to store hour,
minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time) */

#include<iostream>

using namespace std ;

class Time
{
    int h,m,s ;

public :
    void setTime(int x, int y, int z)
    {
        h = x ;
        m = y ;
        s = z ;
    }

    void showTime()
    {
        cout << "Time is = " << h << ":" << m << ":" << s << endl ;
    }

    Time add(Time t)
    {
        Time t3 ;
        t3.h = h + t.h ;
        t3.m = m + t.m ;
        t3.s = s + t.s ;

        return t3 ;
    }

    void normalize()
    {
        int a,b,c ;

        a = s/60 ;

        m = m + a;
        c = m /60 ;
        m = m % 60 ;
        s = s%60 ;

        h = h + c ;
    }
};

int main()
{
    Time t1,t2,t4 ;

    t1.setTime(3,40,45) ;
    t2.setTime(4,30,50) ;

    t4 = t1.add(t2) ;
    t4.showTime() ;

  t4.normalize();
    t4.showTime() ;

    return 0;
}
