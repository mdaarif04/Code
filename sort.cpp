#include <iostream>
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
    cout << "Print" << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] > a[i])
            {
                int temp;
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << endl;

    return 0;
}