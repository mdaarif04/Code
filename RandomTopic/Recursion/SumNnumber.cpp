#include <iostream>
using namespace std;
int f1(int n)
{
    int s;
    if (n == 1)
    {
        return (1);
    }
    s = n + f1(n - 1);
    return s;
}
int main()
{
    int n;
    cin >> n;
    int k;
    k = f1(n);
    cout << k << endl;

    return 0;
}