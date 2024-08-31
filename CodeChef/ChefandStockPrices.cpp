#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p, a, b, c;
        cin >> p >> a >> b >> c;
        if (100* b >= p*(100+c) && p*(100+c)>=100*a)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}