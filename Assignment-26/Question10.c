// Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result.

#include<iostream>

using namespace std ;

class StaticCount
{
    static int count ;
public :
    void Count()
    {
        count++ ;
    }

    void show()
    {
        cout << "Count = " << count ;
    }
};

int StaticCount :: count ;

int main()
{
    StaticCount s1,s2,s3 ;
    s1.Count();
    s2.Count();
    s3.Count();

    s1.show();

    return 0;
}
