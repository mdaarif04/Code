#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    // 	first+second
    //  first+third
    //  second+third
    //  sum of all that is called Distinct Pair sums
    while (t--)
    {
        int r, l;
        cin >> l >> r;
        int sumofdist = 2*r-2*l+1;
        // 2(r-l)+1
        cout << sumofdist << endl;
    }
    return 0;
}
