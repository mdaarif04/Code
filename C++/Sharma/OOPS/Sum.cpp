#include <iostream>
using namespace std;
class Sum
{
public:
    int a;
    int b;
    int c;
    public:

    void get();
    void add();
    void show();
};
void Sum::get(){
    cout<<"Enter the a and b"<<endl;
    cin>>a>>b;
}
void Sum::add(){
    c = a+b;
}
void Sum::show(){
    cout<<"The Sum of a and b is "<<c<<endl;
}

int main()
{
    Sum obj;
    obj.get();
    obj.add();
    obj.show();

    return 0;
}