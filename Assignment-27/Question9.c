/* Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string (Uppercase to
Lowercase and vice versa). */

#include<iostream>

using namespace std ;

class mystring
{
    char str[10];
public :
    void getString()
    {
        cout << "String is : " << str << endl ;
    }

    void setString()
    {
        cout << "Enter the string : " ;
        cin >> str ;
    }

    void operator!()
    {
        for(int i=0;str[i]!='\0';i++){
            if(str[i] >= 65 && str[i] <= 90)
                str[i] = str[i] + 32 ;
            else if(str[i] >= 97 && str[i] <= 112)
                str[i] = str[i] - 32 ;
        }
        cout << str ;
    }
};

int main()
{
    mystring m1;

    m1.setString();
    m1.getString();

    !m1 ;

    return 0 ;
}
