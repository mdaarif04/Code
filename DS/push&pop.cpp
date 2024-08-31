#include <iostream>
#include <string.h>
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;

signed main()
{
    priority_queue<int, vector<int>> pq;
    
    pq.push(2);
    pq.push(3);
    pq.push(1);

    cout << pq.top() << endl;

    return 0;
}