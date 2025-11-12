#include<iostream>
#include<vector>
using namespace std;
// DATED : 12-11-2025 : Jabalpur
// Now there isn't much about the code to learn it is one of the easiest code. will do it with cyclic sorting as well later.
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
int main(){
    vector<int> nums = {4,3,2,7,8,2,3,1};
    for(int ele : findDisappearedNumbers(nums)){
        cout<<ele<<" ";
    }  cout<<endl;
}