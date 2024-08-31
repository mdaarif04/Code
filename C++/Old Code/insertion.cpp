#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)           // 25,36,87,24,3
    {                                     // 25,36,87,24,3
        cin>>arr[i];                      // 24,25,36,87,3
    }                                     //  3,24,25,36,87
    for (int i = 0; i < n; i++)
    {
        int current=arr[i];
        int j=i-1;
        while (arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    
    return 0;
}