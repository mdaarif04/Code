// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1 
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            if (j <= i)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}