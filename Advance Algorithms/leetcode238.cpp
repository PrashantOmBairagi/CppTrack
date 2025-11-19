#include<iostream>
#include <vector>
using namespace std;
// DATED : 19-11-2025 : Jabalpur : Leetcode238 (MED)
// Learning prefix sum ; Example 1:
// Example 1:                          Example 2:
// Input: nums = [1,2,3,4]             Input: nums = [-1,1,0,-3,3]
// Output: [24,12,8,6]                 Output: [0,0,9,0,0]

vector<int> productExceptSelf(vector<int>& nums) {
    int product=1;
    int zeroCount = 0;
    for(int ele : nums) {
        if(ele!=0){ 
            product*=ele;                
        }else zeroCount++;
    }
    for(int &ele : nums){
        if(zeroCount>1){
            ele = 0;
        }else if(zeroCount==1){
            if(ele==0) ele = product;
            else ele = 0;
        }else ele = product/ele;
    }

    return nums;    
}

int main(){
    vector<int>arr = {-1,1,0,-3,3};

    for(int ele : productExceptSelf(arr) ){
        cout<<ele<<" ";
    } 
    cout<<endl;

    return 0;
}