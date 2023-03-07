/* Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time. */

#include<iostream>

using namespace std ;

class Time
{
    int hours,minutes,seconds ;

public :

    Time()
    {

    }

    friend istream& operator>>(istream& input, Time t) ;
    friend ostream& operator<<(ostream& output, Time t) ;

};

istream& operator >>(istream& input, Time t)
{
    cout << "Enter Hours : " ;
    input >> t.hours ;
    cout << "Enter Minutes : " ;
    input >> t.minutes ;
    cout << "Enter Seconds : " ;
    input >> t.seconds ;

    return input ;
}

ostream& operator <<(ostream& output, Time t)
{
    output << "Hours : " << t.hours << endl ;
    output << "Minutes : " << t.minutes << endl ;
    output << "Seconds : " << t.seconds << endl ;

    return output ;
}

int main()
{
    Time t1,t2 ;

    cout << endl << "Enter First Time" << endl ;
    cout << "----------------" << endl ;
    cin >> t1 ;

    cout << "First Time" << endl ;
    cout << t1 ;

    return 0;
}
