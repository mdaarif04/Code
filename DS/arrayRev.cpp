//*********************************************************given by already***********************************************
// #include <iostream>
// using namespace std;
// void arrayRev(int arr[])
// {
//     int demo;
//     for (int i = 0; i <9/2 ; i++)
//     {

//         demo = arr[i];
//         arr[i] = arr[8 - i];
//         arr[8 - i] = demo; 
//     }
// }
// void arrayPrint(int arr[])
// {
//     for (int i = 0; i < 9; i++)
//     {
//         cout<<"Before Reverse index:"<< i <<" Arry: "<<arr[i]<<endl;
//     }
// }
// int main()
// {
//     int arr[] = {25, 56, 69, 89, 90, 99, 110, 120, 144};

//     cout<<"Before Reverse Array"<<endl;
//     arrayPrint(arr);
//     arrayRev(arr);
//     cout<<"After revers Array:"<<endl;
//     arrayPrint(arr);

//     return 0;
// }
//******************************************************Array Revers******************************************************

// #include <iostream>
// #include <algorithm>
// using namespace std;
 
// Utility function to print contents of an array
// void print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }
 
// Utility function to reverse elements of an array
// void reverse(int arr[], int n) {
//     reverse(arr, arr + n);
// }
 
// int main()
// {
//     int arr[] = { 1, 2, 3, 4, 5 };
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
    
//     n = sizeof(arr)/sizeof(arr[0]);
 
//     reverse(arr, n);
//     print(arr, n);
 
//     return 0;
// }

#include<iostream>
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
    int demo=0;
    for (int i = 0; i < n/2; i++)
    {
        demo=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=demo;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

