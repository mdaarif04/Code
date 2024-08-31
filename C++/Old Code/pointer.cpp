#include<iostream>
using namespace std;

int main()
{
    int a=3;
    int* b=&a;
    //(Address of) oprator
    cout<<"The address of a is: "<<b<<endl;
    cout<<"The address of a is:"<<&a<<endl;
    // (value at) Dereference operator
    cout<<"The value at address b is: "<<*b<<endl;

    return 0;
}