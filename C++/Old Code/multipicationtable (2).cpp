#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number want print the table "<<endl;
    cin>>n;
    for (int i = 1; i <= 10; i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    
    return 0;
}