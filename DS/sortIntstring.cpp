#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "123421";
    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<endl;
    return 0;
}
