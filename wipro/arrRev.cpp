#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // int s = 0;
    // int e = n - 1;
    // // start <= end
    // for (int s = 0; s < e; s++)
    // {
    //     int temp = a[s];
    //     a[s] = a[e];
    //     a[e] = temp;
    //     e--;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int s = 0;
    int e = n-1;
    for (s = 0; s < n; s++)
    {
        int temp = a[s];
        a[s] = a[e];
        a[e] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout<< a[i]<<" ";
    }

    return 0;
}