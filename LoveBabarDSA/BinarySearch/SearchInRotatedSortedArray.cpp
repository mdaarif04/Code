// Search In Rotated Sorted Array

#include <iostream>
using namespace std;

int BinarySearch(int a[],int s,int e, int k)
{
    int start = s;
    int end = e;
    // int mid = (start + end) / 2;
    // out of integer range
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (a[mid] == k)
        {
            return mid;
        }
        // go to right wala part
        else if (k > a[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int PivotRotated(int a[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (a[mid] >= a[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    // cout<<BinarySearch(a,n,k)<<endl;

    int pivot = PivotRotated(a, n);
    if (k > a[pivot] && k <= a[n - 1])
    {
        // BS on Second line
        cout<<BinarySearch(a, pivot, n - 1, k);
    }
    else
    {
        // BS on First line
        cout<<BinarySearch(a, 0, pivot - 1, k);
    }

    return 0;
}