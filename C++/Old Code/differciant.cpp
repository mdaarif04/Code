#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    // cout << sum << " ";
    if (n>sum)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    

    return 0;
}