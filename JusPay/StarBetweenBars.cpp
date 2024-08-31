#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;
    int n;
    cin >> n;
    vector<int> startIndex(n);
    vector<int> endIndex(n);
    for (int i = 0; i < n; i++) {
        cin >> startIndex[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> endIndex[i];
    }
    int len = str.length();
    vector<int> counter(len, -1);
    int count = 0;
    int lastIdx = -1;

    stack<int> st;
    for (int i = 0; i < len; i++) {
        char ch = str[i];
        if (ch == '|') {
            while (!st.empty()) {
                int idx = st.top();
                st.pop();
                counter[idx] = i;
            }
        }
        st.push(i);
    }

    vector<int> ansArr(n);
    for (int i = 0; i < n; i++) {
        int sIndex = startIndex[i];
        int eIndex = endIndex[i];
        int sCount = 0;
        if (str[sIndex] != '|')
            sIndex = counter[sIndex];
        if (sIndex == -1 || counter[sIndex] == -1) {
            ansArr[i] = 0;
            continue;
        }
        while (sIndex < eIndex) {
            int nextIdx = counter[sIndex];
            if ((nextIdx != -1) && (nextIdx <= eIndex))
            {
                sCount += nextIdx - sIndex - 1;
            }
            sIndex = nextIdx;
        }
        ansArr[i] = sCount;
    }

    for (int ele : ansArr) {
        cout << ele << " ";
    }
    cout << endl;

    return 0;
}