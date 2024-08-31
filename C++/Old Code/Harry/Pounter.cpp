#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *b = &a;

    // (Addres of) operator 
    cout<<"Address of a "<<&a<<endl;
    cout<<"Address of a "<<b<<endl;

    // Derefrence operator
    cout << "The value of at Address a " << *b << endl;

    return 0;
}