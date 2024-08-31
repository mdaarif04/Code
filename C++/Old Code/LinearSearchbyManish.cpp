
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int solve(vector<int> &nums, int x){
    
    int left = 0;
    int right = nums.size()-1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(nums[mid] == x){
            return mid;
        }
        else if(nums[mid] < x){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}
int main(){

    int n;
    cin >> n;

    int vt;

    vector<int> nums;
    for(int i = 0; i < n; i++){
        cin >> vt;
        nums.push_back(vt);
    }
    
    int target;
    cin >> target;
    int ans = solve(nums, target);
    cout << ans << endl;
    
    return 0;
}