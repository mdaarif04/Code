#include<bits/stdc++.h>
using namespace std;

string solve(string st){

    sort(st.begin(), st.end());
    for(int i = 0; i < st.size(); i++){
        cout << st[i] << " ";
    }
}
int main(){

    string s;
    getline(cin, s);

    string ans = solve(s);
    cout << ans;

    return 0;
}