// Define a class student and write a program to enter student details using constructor and
// define member function to display all the details.

#include<iostream>

using namespace std ;

class Student
{
    int marks,grade,houseNumber ;

public :
    Student(int a, int b, int c)
    {
        marks = a;
        grade = b ;
        houseNumber = c ;
    }

    void show()
    {
        cout << "Marks = " << marks << endl ;
        cout << "Grade = " << grade << endl ;
        cout << "House Number = " << houseNumber ;
    }
};

int main()
{
    int x,y,z ;

    cout << "Enter the marks,grade and house number of the student : " ;
    cin >> x >> y >> z;

    Student s(x,y,z) ;
    s.show() ;

    return 0;
}
