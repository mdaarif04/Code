#include<iostream>
using namespace std;
long fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return(n*fact(n-1));
    
}
int main()
{
    int no;
    cin>>no;
    cout<<"The factorial of "<<no<<" is "<<fact(no);
    return 0;
}
