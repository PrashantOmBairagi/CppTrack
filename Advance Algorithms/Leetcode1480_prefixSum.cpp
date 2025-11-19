#include<iostream>
#include <vector>
using namespace std;
// DATED : 19-11-2025 : Jabalpur
// Learning prefix sum ; i.e. to sum the next element of array with previous elements of it. Solved easy question in milliseconds.
vector<int> runningSum(vector<int>& nums) {
    for(int i = 1;i<nums.size();i++){
        nums[i]+=nums[i-1];
    }
    return nums;
}
int main(){
    vector<int>arr = {1,2,3,4};
    for(int ele : runningSum(arr)){
        cout<<ele<<" ";
    } cout<<endl;
}