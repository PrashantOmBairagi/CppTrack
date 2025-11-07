#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> getFinalState(vector<int>& nums, int k,int multiplier) {
    int idx=0;
    if(k==0) return nums;
    for(int i=0;i<nums.size();i++){
        if(nums[idx]>nums[i]){ 
            idx=i;
        }
    }
    nums[idx]=nums[idx]*multiplier;
    getFinalState(nums,k-1,multiplier);
    return nums;
}
vector<int> get(vector<int>& nums, int k, int multiplier) {
        for(int i=0;i<k;i++){
            auto minimum = min_element(nums.begin(),nums.end());
            *minimum *= multiplier;
        }
        return nums;
    }

int main(){
    vector<int>nums;
    nums={5,3,1,1};
    int k = 4, multiplier=3;
    get(nums,k,multiplier);
    for(int ele : nums){
        cout<<ele<<" ";
    }
}