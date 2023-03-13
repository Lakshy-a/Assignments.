// Create a student class and overload new and delete operators as a member function of
// the class.

#include<iostream>
#include<cstring>

using namespace std ;

class Student
{
    string name ;
    int age ;

public :
    Student()
    {
        cout << "Default Constructor is called " << endl ;
    }

    Student(string n, int a)
    {
        name = n ;
        age = a;
    }

    void display()
    {
        cout << "Name : " << name << endl ;
        cout << "Age : " << age << endl ;
    }

    void *operator new(size_t size)
    {
        cout << "Overloading new operator with size : " << size << endl ;
        void *p = malloc(size);

        return p ;
    }

    void operator delete(void *p)
    {
        cout << "Overloading delete operator " << endl ;
        free(p) ;
    }
};

int main()
{
    Student *p = new Student("Lakshya",22);

    p->display();
    delete p ;

    return 0;
}
