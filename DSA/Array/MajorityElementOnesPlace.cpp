#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>& nums) {
    vector<int>ans(10,0);
    int i=0,j=0,k=0;
    while(i<nums.size()){
        ans[nums[i]]++;
        i++;
    }
    // while(j<ans.size()){
    //     cout<<ans[j]<<" ";
    //     j++;
    // }
    while(k<10){
        if(ans[k]>nums.size()/2) return k;
        k++;
    }
return 0;
}
int main(){
    vector<int>nums={3,1,3};
    cout<<majorityElement(nums);
}
