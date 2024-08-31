#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // int a[n];

    vi a[n]

    rep(i, 0, n)
        cin >>a[i];

    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }

    int x;
    cin >> x;

    sort(a.begin(), a.end, greater<int>());
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += x / a[i];
        x -= x / a[i] * a[i];
    }
    cout << ans << endl;

    return 0;
}