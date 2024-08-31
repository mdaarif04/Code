#include<bits/stdc++.h>
using namespace std;
map<int,int> m;
int main()
{
    int n,a,ans=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        m[a]++;
        if(m[a]>1) ans++;
    }
    cout<<ans;
}