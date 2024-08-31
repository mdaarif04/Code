#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"The Array is "<<arr[i]<<" "<<endl;
    }
    int index;
    cin>>index;
    cout<<"The array is "<<arr[index];
    
    return 0;
}
