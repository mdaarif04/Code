#include<iostream>
using namespace std;
int sum(int n1,int n2);
// int sum(int,int);     //Acceptable
void g(void);
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    // Actual paramiter
    cout<<"The sumb of two number is "<<sum(n1,n2)<<endl;
    g();
    return 0;
}
int sum(int a,int b)
{
    // Formal paramiter
    int c=a+b;
    return c;
}
void g()
{
    cout<<"Good morning Md Aarif Raza "<<endl;
}
