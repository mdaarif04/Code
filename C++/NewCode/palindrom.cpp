// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     char arr[n + 1];
//     cin >> arr;

//     bool check = 1;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != arr[n - 1 - i])
//         {
//             check = 0;
//         }
//     }
//     if (check)
//     {
//         cout << "Yes This is polindron:" << endl;
//     }
//     else
//     {
//         cout << "No This is not polindron:" << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char a[n + 1];
    cin>>a;

    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            check = 0;
        }
    }
    if (check)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}