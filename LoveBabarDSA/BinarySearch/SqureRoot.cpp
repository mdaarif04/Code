// Find Squre root in time of O(logn)/

#include <iostream>
using namespace std;
int BinarSearch(int n)
{
    int start = 0;
    int end = n;
   long long int mid = start + (end - start) / 2;
   long long int ans = -1;
   while (start <= end)
   {
       long long int squre = mid * mid;
       if (squre == n)
       {
           return mid;
       }
       else if (squre < n)
       {
           ans = mid;
           start = mid + 1;
       }
       else
       {
           end = mid - 1;
       }
       mid = start + (end - start) / 2;
    }return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << BinarSearch(n) << endl;
    return 0;
}