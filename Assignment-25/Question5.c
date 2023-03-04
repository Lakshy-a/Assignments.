// Define a class ReverseNumber and define an instance member function to find Reverse
// of a Number using class.

#include<iostream>

using namespace std ;

class ReverseNumber
{
    int n,rev;

public :
    ReverseNumber(int a)
    {
        a = n ;
    }

    void reverse()
    {
        int b,num ;
        num = n;
        rev = 0 ;

        while(num){
            b = num%10;
            rev = rev*10 + b ;
            num /= 10 ;
        }
    }

    void display()
    {
        cout << "Reversed number = " << rev ;
    }
};

int main()
{
    int a ;

    cout << "Enter the number you want to reverse : " ;
    cin >> a ;

    ReverseNumber r(a) ;
    r.reverse();
    r.display();

    return 0 ;
}
