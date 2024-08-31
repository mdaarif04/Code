#include <iostream>
using namespace std;
class Factorial
{
    int n;
    int f = 1;

public:
    void get();
    void show();
};

void Factorial::get()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
}

void Factorial::show()
{
    cout << f << endl;
}

int main()
{
    Factorial obj;
    obj.get();
    obj.show();

    return 0;
}