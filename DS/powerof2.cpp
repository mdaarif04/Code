#include <iostream>
using namespace std;
int ispowerof2(int n)
{
    return (n && !(n & n - 1));
}
int main()
{
    // cout<<ispowerof2(16)<<endl;
    if (ispowerof2(16))
    {
        cout << "This is power of 2: " << endl;
    }
    else
    {
        cout << "This is not power of 2: " << endl;
    }

    return 0;
}
