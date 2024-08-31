#include<iostream>
using namespace std;
int sum(int n1,int n2)
{
    int c=n1+n2;
    return c;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<sum(n1,n2);

    return 0;
}