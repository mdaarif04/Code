#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,sum=0,sum1=0; 
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(),s.end(),greater<char>());
    for(auto i:s)
        sum+=(i-'0');
    for(auto i:s){
        if(sum1>sum)
        break; 
        sum1+=(i-'0');
        sum-=i-'0';
    }
    cout<<sum1; 
}