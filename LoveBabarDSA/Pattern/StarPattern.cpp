#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;

    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << "*";
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }
    // *
    // **
    // ***
    // ****

    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << row;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    //  1
    //  22
    //  333
    //  4444
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }

    return 0;
}