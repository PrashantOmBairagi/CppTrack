#include<iostream>
#include<vector>
using namespace std;
// DATED : 12-11-2025 : Jabalpur
// Now there isn't much about the code to learn it is one of the easiest code. will do it with cyclic sorting as well later. the time complexity is TC = O(n) but Space complexity is O(n) which can be reduced to O(1) by cyclic sort.

// HERE FROM Line 22 -> 35 What we see is a cyclic sort. it has time complexity of O(n) with no extra space used i.e.space complexity O(1) , except the array which has to be returned; 

vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        vector<bool>present(n,false);
        for(int ele : nums){
            present[ele-1]=true;
        }
        for(int i=0;i<n;i++){
            if( !present[i] ){
                ans.push_back(i+1);
            }
        }
        return ans;
    }

vector<int> findDisappearedNumbers2(vector<int>& nums){
    int n = nums.size(), i = 0;
    vector<int>ans;
    while(i<n){
        int actIdx = nums[i]-1;
        if(nums[actIdx]==nums[i]){
            i++;
        } else swap(nums[actIdx],nums[i]);
    }
    for(int i=0;i<n;i++){
        if(i+1!=nums[i]) ans.push_back(i+1);
    }
    return ans;
}
int main(){
    vector<int> nums = {4,3,2,7,8,2,3,1};
    // for(int ele : findDisappearedNumbers(nums)){
    //     cout<<ele<<" ";
    // }  cout<<endl;

    for(int ele : findDisappearedNumbers2(nums)){
        cout<<ele<<" ";
    }  cout<<endl;
}