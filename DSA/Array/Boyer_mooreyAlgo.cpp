#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>& nums) {
    int count=0;
    int target=0;
    for(int num : nums){
        //cout<<nums<<' ';
        if(target==0){
            target=num;
        }
        if(target=num){
            count++;
        }
        else count--;

    }
    
    return target;
}
int main(){
    vector<int>nums={12,12,12,1,2,1,1,12};
    cout<<majorityElement(nums);
}
