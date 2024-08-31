//  Peak Index of Mountain Array

#include <iostream>
using namespace std;
int PeakMountain(int a[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (a[mid] < a[mid + 1])
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
    int a[6] = {4, 5, 6, 8, 2, 1};
    cout << PeakMountain(a, 6, 8);
    return 0;
}