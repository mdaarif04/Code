// Rotated array peak element find in 0(logn)

#include <iostream>
using namespace std;
int PivotkRotated(int a[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (a[mid] >= a[0])
        {
            start = mid+1;
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
    cout << PivotkRotated(a, n) << endl;

    return 0;
}