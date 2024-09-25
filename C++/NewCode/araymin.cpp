#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int minN = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        minN = min(a[i], minN);
    }
    cout << minN;

    return 0;
}