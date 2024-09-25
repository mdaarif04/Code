// Tom is riding a train on a large grid(size 10^5*10^5) that is completely covered in railway tracks.
// Tom starts at a specific position on the grid(cell(𝑎,𝑏),and Jerry is tied up in a different cell(cell(𝑐,d))
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        // minimum number of move toom need to reach jurry
        int mindist = (a - c) + (b - d);
        if (mindist > k)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
