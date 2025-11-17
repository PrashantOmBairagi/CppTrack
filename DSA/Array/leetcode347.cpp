#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    vector<pair<int,int>> freq;
    
    int count = 1;
    for (int i = 1; i <= nums.size(); i++) {
        if (i < nums.size() && nums[i] == nums[i-1]) {
            count++;
        } else {
            freq.push_back({count, nums[i-1]});
            count = 1;
        }
    }
    
    sort(freq.begin(), freq.end(), greater<pair<int,int>>());
    
    vector<int> ans;
    for (int i = 0; i < k; i++) ans.push_back(freq[i].second);
    return ans;
}

int main() {
    vector<int> nums = {1,2,1,2,1,2,3,1,3,2};
    int k = 2;

    vector<int> result = topKFrequent(nums, k);
    for (int x : result) cout << x << " ";
    return 0;
}
