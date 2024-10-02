#include <iostream>
using namespace std;
int main()
{
    int n, prime = 1;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0 && n != 2)
    {
        cout << "Not" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
    return 0;
}
