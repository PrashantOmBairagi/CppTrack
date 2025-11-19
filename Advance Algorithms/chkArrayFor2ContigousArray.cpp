#include<iostream>
#include <vector>
using namespace std;
// DATED : 19-11-2025 : Jabalpur
// Learning prefix sum ; Check if the array can be partitioned into two sub arrays such that their sum is equal on both side if YES then Return that Pivot else return NO.
int check(vector<int>& arr){
    vector<int>nums(arr.size());
    nums[0]=arr[0];
    for(int i=1;i<arr.size();i++) nums[i]=arr[i]+nums[i-1];
    for(int i=1;i<arr.size();i++){
        if(nums[i]==(nums[arr.size()-1]-nums[i])) return i;
    }
    return 0;
}
int main(){
    vector<int> arr = {1,4,5,3,2,7,8};
    int idx = check(arr);
    switch(idx){
        case 0: cout<<"There Are No Two Arrays Present"; break;

        default : cout<<"YES there exist two arrays :"<<endl;
        cout<<"Arr1 : ";
        for(int i=0;i<=idx;i++) cout<<arr[i]<<" ";
        cout<<endl;

        cout<<"Arr2 : ";
        for(int i=idx+1;i<arr.size();i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}