#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // Write a natural number
    // int n;
    // cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout<<i<<endl;
    // }

    // int a, b;
    // cin >> a >> b;
    // for (int num = a; num <= b; num++)
    // {
    //     cout << num << " ";
    // }

    // Same input same output

    // int a;
    // float b;

    // cin >> a >> b;
    // cout << a <<endl;
    // cout << fixed << setprecision(1);
    // cout << b <<endl;

    // input
    // 2
    // 3 5
    // 3 7
    // output
    // 3 4 5
    // 3 4 5 6 7
    // int t;
    // cin>>t;
    // while (t--)
    // {
    //     int a,b;
    //     cin>>a>>b;
    //     for (int num = a; num <= b; num++)
    //     {
    //         cout<<num<<" ";
    //     }cout<<endl;
    // }

    // input: 5
    // output:
    // 1
    // 22
    // 333
    // 4444
    // 55555

    // int n;
    // cin >> n;
    // int r = 1;
    // // 1<=5
    // while (r <= n)
    // {
    //     int c = 1;
    //     while (c <= r)
    //     {
    //         cout<<r;
    //         c = c+1;
    //     }
    //     cout<<endl;
    //     r = r+1;
    // }

    //     5
    // 11111
    // 22222
    // 33333
    // 44444
    // 55555
    // int n;
    // cin >> n;
    // int r = 1;
    // while (r <= n) // 2 <= 5
    // {
    //     int c = 1;     //
    //     while (c <= n) // 1 <= 5
    //     {
    //         cout << r; // 1
    //         c++;
    //     }
    //     cout << endl;
    //     r++;
    // }

    // int n;
    // cin >> n;
    // int r = 1;
    // while (r <= n) // 2 <= 5
    // {
    //     int c = 1;     //
    //     while (c <= n) // 1 <= 5
    //     {
    //         cout << n; // 1
    //         n--;
    //     }
    //     cout << endl;
    //     r++;
    // }

    //  digit reverse and also sum of digit if required
    int n;
    cin >> n;
    int r = 0;
    // int sum = 0;
    while (n!=0)
    {
        int d = n % 10;
        r = r * 10 + d;
        n /= 10;
        // sum+=d;
        // cout<<sum<<" ";
    }
    cout<<r<<" ";
    // 5
    //  
    
    
    return 0;
}