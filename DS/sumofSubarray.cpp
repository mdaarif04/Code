// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int maxSum = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 sum += a[k];
//             }
//             cout << "Subarray is: " << sum << endl;
//             maxSum = max(maxSum, sum);
//         }
//     }
//     cout << "maximum subarray is:" << maxSum << endl;

//     //Time complecity is O(n3)

//     return 0;
// }

// //*************************************************Kadane's algorithm*************************************************

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int currSum=0;
    int maxSum=INT_MIN;             //This is aproch
    for (int i = 0; i < n; i++)     //  -1  4  -6  7  -4
    {                               //  -1  4  -2  7   3
        currSum+=a[i];              //   0  4   0  7   3
        if (currSum<0)
        {
            currSum=0;
        }
        maxSum=max(maxSum,currSum);

    }
    cout<<maxSum<<" ";
    //Time complexcity is O(n);
    return 0;
}
