#include<iostream>
using namespace std;
// int equilibriumPoint(int a[],int n)
// {
//     int sum=0;
//     int leftsum=0;
//     for (int i = 0; i < n; i++)
//     {
//         sum+=a[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         sum-=a[i];             // sum is now right sum for index i 
//         if (leftsum==sum)
//             return i;
//         leftsum+=a[i];
        
//     }
//     return -1;
// }

int equilibriumPoint(int arr[],int n)
{
    int sum = 0;
    for (int i = 0; i < n;i++)
        sum += arr[i];
    int lSum = 0;
    for (int i = 0; i < n;i++)
    {
        sum -= arr[i];
        if(lSum==sum)
            return i;
        lSum += arr[i];
    }
    return -1;
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
    n=sizeof(a)/sizeof(a[0]);
    cout<<equilibriumPoint(a,n)<<endl;
    
    return 0;
}

