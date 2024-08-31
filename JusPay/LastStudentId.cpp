#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    char c = s[0];
    int j = 0;
    for(int i=1;i<s.length();i++)
    if(c<s[i]) {j=i;c=s[i];}
    cout<<s.substr(j,s.length()-j);
}