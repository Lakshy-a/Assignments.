// Define a function to find the highest value digit in a given number.

#include<iostream>

using namespace std;

class Largest
{
public :
    int n ;

    void LargestDigit()
    {
        int largest = -1,a=0;

        while(n>0){
            a = n%10;
            if(a > largest){
                largest = a;
            }
            n /= 10;
        }
    cout << "Largest digit in the given number = " << largest ;
    }
};

int main()
{
    class Largest l ;

    cout << "Enter the number : "  ;
    cin >>  l.n ;

    l.LargestDigit();

    return 0;
}
