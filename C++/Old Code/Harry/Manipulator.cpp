#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // manipulator mens formating program like endl,setw
    int a=20;
    int b=301;
    int c=4045;
    cout<<"Without setW "<<a<<endl;
    cout<<"Without setW "<<b<<endl;
    cout<<"Without setW "<<c<<endl;

    cout<<"Without setW "<<setw(4)<<a<<endl;
    cout<<"Without setW "<<setw(4)<<b<<endl;
    cout<<"Without setW "<<setw(4)<<c<<endl;
    return 0;
}