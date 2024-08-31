#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int c=a+b;
    return c;
}
void swappointer(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;

}
void calbyreference(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a,b;
    cin>>a>>b;
    // cout<<"The sum of a and b is: "<<sum(a,b)<<endl;
    cout<<"The value of a is "<<a<<" The value of b is: "<<b<<endl;
    // swappointer(&a,&b);
    // cout<<"After swap function"<<endl;
    // cout<<"The value of a is "<<a<<" The value of b is: "<<b<<endl;
    // cout<<"using call by reference "<<endl;
    calbyreference(a,b);
    cout<<"After swap function"<<endl;
    cout<<"The value of a is "<<a<<" The value of b is: "<<b<<endl;

    return 0;
}