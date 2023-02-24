// Define a function to swap data of two int variables using call by reference

#include<iostream>

using namespace std ;

class Swap
{
    public:
    int x,y ;

    void swap(int *a , int *b)
    {
        int temp ;
        temp = *a ;
        *a = *b ;
        *b = temp ;
    }
};

int main()
{
    Swap s;

    cout << "Enter the numbers : " << endl ;
    cin >> s.x >> s.y ;

    cout << "Before Swapping : x = " << s.x << " and y = " << s.y << endl;

    s.swap(&s.x,&s.y);

    cout << "After Swapping : x = " << s.x << " and y = " << s.y << endl;

    return 0;
}
