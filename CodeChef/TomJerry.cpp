#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        // distance =∣a−c∣ +∣b−d∣
        // int dis = (a-c)+(b-d);
        int dis  = abs(a-c)+abs(b-d);
        // distance <= K && (K - distance) % 2 == 0 if (k >= dis)
        if(dis<= k && (k-dis)% 2 == 0 )
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}