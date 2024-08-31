#include<iostream>
using namespace std;
inline int product(int a,int b)
{
    return a*b;
}
float mymoney(int currentmoney,float factor=1.04)
{
    return currentmoney*factor; //factor is default argunment
}
int main()
{
    // int a,b;
    // cout<<"Enter the number of a and b :"<<endl;
    // cin>>a>>b;
    // cout<<"The Product of a and b :"<<product(a,b)<<endl;
    // cout<<"The Product of a and b :"<<product(a,b)<<endl;
    int money=100000;
    cout<<"The current money in Your account "<<money<< " After 1 Year Your money is :"<<mymoney(money)<<endl;
    cout<<"For VIP The current money in Your account "<<money<< " After 1 Year Your money is :"<<mymoney(money,1.1)<<endl;

    return 0;
}