// using Binary Search tree

// first and last occurence in sorted array

#include <iostream>
using namespace std;

int firstOc(int a[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (a[mid] == k)
        {
            ans = mid;
            end = mid - 1;
        }
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
    return ans;
}
int lastOc(int a[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (a[mid] == k)
        {
            ans = mid;
            start = mid - 1;
        }
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
    return ans;
}
int main()
{
    int a[5] = {1, 2, 3, 3, 4};
    cout << firstOc(a, 5, 2) << endl;
    cout << firstOc(a, 5, 4) << endl;
    return 0;
}