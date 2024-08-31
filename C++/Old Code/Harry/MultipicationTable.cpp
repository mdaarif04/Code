#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;

    // using for loop
    // for (i=1; i <= 10; i++)
    // {
    //     cout << n << " * " << i << " = " << n * i << endl;
    // }

    // Using while loop

    // while (i<=10)
    // {
    //     cout << n << " * " << i << " = " << n * i << endl;
    //     i++;
    // }

    // Using do-while loop
    do
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    } while (i<=10);

    return 0;
}