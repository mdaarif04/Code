#include<iostream>
using namespace std;
int main(){
    // if you enter 5 print five if you enter 8 print eight and if you print 44 print greater than 9
    string num[10]={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    // Write your code here
    if(n>9)
    {
        cout<<num[0];
    }
    else
    {
        cout<<num[n];
        
    }
    return 0;
    }