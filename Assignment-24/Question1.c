// Define a function to check whether a given number is a Prime number or not.

#include<iostream>

using namespace std ;

void prime(int n)
{
    int i,count=0 ;

    for(i=2;i<=n/2;i++){
        if(n%i == 0)
            count++;
    }

    if(count == 1)
        cout << n << " is not a prime number ";
    else
        cout << n << " is a prime number";
}

int main()
{
    int n ;

    cout << "Enter the number : ";
    cin >> n ;

    prime(n);
    return 0;
}
