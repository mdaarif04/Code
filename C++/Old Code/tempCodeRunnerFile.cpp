#include<iostream>
using namespace std;
class complex
{
    int a,b;
public:
    complex(int,int);
    void printNumber(void)
    {
        cout<<"Your number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};

// complex::complex(void)
// {
//     a=0;
//     b=0;
// }
complex::complex(int x,int y)
{
    a=x;  //this is dafault parameter
    b=y;
}
int main()
{
    // Implcit call
    complex c1(4,5);
    c1.printNumber();
    // c1.printNumber()
    // c2.printNumber();
    // c3.printNumber();
    return 0;
}

/*
1. It should be declared in the public section of the class 
2. They are automatically invoked whenever the object is created
3. It can have default argumnets
5. We cannot refer to their address
*/