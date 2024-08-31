// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 1; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int curr=0;
//     for (int i = 1; i < n; i++)
//     {
//         curr=0;
//         for (int j = 1; j < n; j++)
//         {
//             curr+=arr[j];
//         }

//     }
//             cout<<curr<<endl;

//     return 0;
// }

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 1; i < n ; i++)
    {
        cin>>a[i];
    }

    int curr;
    for (int i = 1; i < n; i++)
    {
        curr=0;
        for (int j = 1; j < n; j++)
        {
            curr+=a[j];
            cout<<a[j]<<" ";
        }
        cout<<endl;

    }
             cout<<"Subsequence sum = "<<curr;

    return 0;
}
