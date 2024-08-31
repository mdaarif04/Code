#include <iostream>
using namespace std;

int BinarySearch(int a[], int n, int k)
{
    int start = 0;
    int end = n - 1;
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
    cin>>k;
    int index = BinarySearch(a, n, k);
    cout << index << endl;

    return 0;
}