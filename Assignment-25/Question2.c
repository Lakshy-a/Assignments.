/* Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to set
values for time and display values of time. */

#include<iostream>

using namespace std ;

class Time
{
    int hour,minute,second ;

public :
    void setH(int a)
    {
        hour = a ;
    }
    void setM(int b)
    {
        minute = b ;
    }
    void setS(int c)
    {
        second = c ;
    }

    int getH()
    {
        return hour;
    }
    int getM()
    {
        return minute;
    }
    int getS()
    {
        return second;
    }
};
int main()
{
    Time t ;
    int a,b,c ;

    cout << "Enter the hours : " ;
    cin >> a ;
    cout << "Enter the minutes : " ;
    cin >> b ;
    cout << "Enter the seconds : " ;
    cin >> c ;

    t.setH(a);
    t.setM(b);
    t.setS(c);

    cout << "Entered time is : " << t.getH() << "hours " << t.getM() << "minutes " << t.getS() << "seconds" ;

    return 0;
}
