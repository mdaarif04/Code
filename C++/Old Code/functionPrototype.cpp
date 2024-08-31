#include<iostream>
using namespace std;
int sum(int a,int b);
// int sum(int ,int ); acceptable
void g(void);
// void g(); acceptable
int main()
{
    int n1,n2;
    cout<<"Enter the first value :"<<endl;
    cin>>n1;
    cout<<"Enter the second value :"<<endl;
    cin>>n2;
    // this is acutal pairameter
    cout<<"The sum of two number is :"<<sum(n1,n2)<<endl;
    g();
    return 0;
}
int sum(int a,int b)
{
    // this is formal pairameter
    int c=a+b;
    return c;
}
void g()
{
    cout<<"Hello good morning "<<endl;
}