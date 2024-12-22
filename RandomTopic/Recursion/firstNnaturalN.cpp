#include <iostream>
using namespace std;
void f1(int n)
{
    if (n>0)
    {
        f1(n-1);
        cout<<n<<endl;

    }
    
}
int main()
{
    f1(10);

    return 0;
}