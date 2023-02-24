// Define a function to check whether a given number is a term in a Fibonacci series or not.

#include<iostream>

using namespace std ;

class Fibonacci
{
public :
    int n ;

    void fibonacci()
    {
        int a = 0,b = 1,c,flag = 1;

        while(flag = 1){
            c = a+b ;
            a = b;
            b = c;
            if(c == n){
                cout << n << "is a term in a Fibonacci Series" ;
                break ;
            }
            else if(c > n){
                cout << n << " is not a term in a Fibonacci Series ";
                break ;
            }
        }
    }
};

int main()
{
    Fibonacci fibo ;

    cout << "Enter the number : ";
    cin >> fibo.n ;

    fibo.fibonacci();

    return 0;
}
