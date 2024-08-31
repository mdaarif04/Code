// // //if two element  in a array  such that thair sum is equal to given k
// #include<iostream>
// using namespace std;
// bool pairSum(int arr[],int n,int k)
// {
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j =i+1; j < n; j++)
//         {
//             if (arr[i]+arr[j]==k)
//             {
//                 cout<<i<<" "<<j<<endl;
//                 return true;
//             }

//         }

//     }
//     return false;

// }
// int main()
// {
//     int arr[]={2,4,7,11,14,16,20,21};
//     int k=28;  // here your choise you want how much sum between two element check
//     cout<<pairSum(arr,8,k);
//     //Time complexity is O(n2)
//     return 0;
// }
/**********************Time complexity kam karne ke lia  but yah ascending order me hi kam karega*******/
// #include<iostream>
// using namespace std;
// int pairSum(int arr[],int n,int k)
// {
//     int low=0;
//     int high=n-1;
//     while (low<high)
//     {
//         if (arr[low]+arr[high]==k)
//         {
//             cout<<low<<" "<<high<<endl;
//             return true;
//         }
//         else if (arr[low]+arr[high]>k)
//         {
//             high--;
//         }
//         else{
//             low++;
//         }

//     }
//     return false;

// }
// int main()
// {
//     int arr[]={2,4,7,11,14,16,20,21};
//     int k=31;
//     cout<<pairSum(arr,8,k)<<endl;
//     return 0;
//     //Time complexity is O(n)
// }

//************************************************User mode**************************************************

#include<iostream>
using namespace std;
bool pairsum(int a[],int n,int k)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]+a[j]==k)
            {
            cout<<i<<" "<<j<<" "<<endl;
            return true;
            }
        }

    }
    return false;

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;

    cout<<pairsum(a,n,k);
    return 0;
}
