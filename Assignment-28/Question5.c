// Create a student class and overload new and delete operators outside the class.

#include<iostream>

using namespace std;
void * operator new(size_t size)
{
    cout << "New operator overloading " << endl;
    void * p = malloc(size);
    return p;
}

void operator delete(void * p)
{
    cout << "Delete operator overloading " << endl;
    free(p);
}

int main()
{
    int n = 5, i;
    int * p = new int[n];

    for (i = 0; i<n; i++)
    p[i]= i;

    cout << "Array: ";
    for(i = 0; i<n; i++)
        cout << p[i] << " ";

    cout << endl;

    delete [] p;
}
