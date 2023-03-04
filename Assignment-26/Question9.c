/* Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit. */

#include<iostream>

using namespace std ;

class Bill
{
    int unit ;
    char name ;
    float amount ;

public :
    void get(int a, char b)
    {
        unit = a;
        name = b ;
    }

    void calculateBill()
    {
        if(unit <= 100)
            amount = 1.20 * unit ;
        else if(unit <= 200)
            amount = 100*1.20 + (unit-100)*2 ;
        else
            amount = 100*1.20 + 100*2 + (unit - 200)*3 ;
    }

    void show()
    {
        cout << "Electricity of Mr." << name << " = " << amount ;
    }
};

int main()
{
    Bill B ;
    int x ;
    char y ;

    cout << "Enter the units and name of the customer : " ;
    cin >> x >> y ;

    B.get(x,y) ;
    B.calculateBill() ;
    B.show() ;

    return 0;
}
