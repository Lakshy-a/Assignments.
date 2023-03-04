// Define a class Counter and Write a program to Show Counter using Constructor.

#include<iostream>

using namespace std ;

class Counter
{
private :
    int static count ;

    public :
        Counter()
        {
            count++ ;
        }

        void getCount()
        {
           cout << "Count = " << count ;
        }
};

int Counter:: count ;
int main()
{
    Counter c1,c2,c3 ;

    c1.getCount() ;

    return 0;
}
